#include <iostream>
#include <queue>
#include <vector>
#define MAX 1001

using namespace std;

int main()
{
    queue<int> q;
    vector<int> graph[MAX] = {};
    int visited[MAX] = {};
    int n, m, cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (!visited[i + 1])
            cnt++;
        
        q.push(i + 1);
        while (!q.empty())
        {
            int cur = q.front();
            q.pop();
            
            if (visited[cur])
                continue;
            visited[cur] = 1;
            
            for (auto e : graph[cur])
                q.push(e);
        }
    }
    
    cout << cnt;
    
    return 0;
}
