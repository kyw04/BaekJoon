#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<pair<int, int>> graph[10001];
    bool visited[10001] = {};
    
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++)
    {
        int srt, dst, weight;
        cin >> srt >> dst >> weight;
        graph[srt].push_back({ weight, dst });
        graph[dst].push_back({ weight, srt });
    }
    
    int sum = 0;
    pq.push({ 0, 1 });
    while (!pq.empty())
    {
        int cur_weight = pq.top().first;
        int cur_vertex = pq.top().second;
        pq.pop();
        
        if (!visited[cur_vertex])
        {
            visited[cur_vertex] = true;
            sum += cur_weight;
            for (auto node : graph[cur_vertex])
                pq.push(node);
        }
    }
    
    cout << sum;
    
    return 0;
}
