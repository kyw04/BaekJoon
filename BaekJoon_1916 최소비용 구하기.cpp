#include <iostream>
#include <vector>
#include <queue>
#include <limits>
#define INF numeric_limits<int>::max()

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
  
    vector<pair<int, int>> graph[1001] = {};
    int n, m, s, e;
    cin >> n >> m;
    while (m--)
    {
        int start, end, value;
        cin >> start >> end >> value;
        graph[start].push_back({ end, value });
    }
    cin >> s >> e;
    
    priority_queue<pair<int, int>> pq;
    vector<int> distance(n + 1, INF);
    
    distance[s] = 0;
    pq.push({ 0, s });
    while (!pq.empty())
    {
        int cur_node = pq.top().second;
        int cur_value = -pq.top().first;
        pq.pop();
        
        if (cur_value > distance[cur_node]) continue;
        
        for (auto next : graph[cur_node])
        {
            int next_node = next.first;
            int next_value = next.second + cur_value;
            
            if (next_value < distance[next_node])
            {
                distance[next_node] = next_value;
                pq.push({ -next_value, next_node });
            }
        }
    }
    cout << distance[e];
    
    return 0;
}
