#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    vector<vector<int>> graph;
    vector<int> result;
    vector<int> inDegree;
    queue<int> q;

    int n, m;
    cin >> n >> m;
    graph.resize(n + 1);
    inDegree.resize(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        inDegree[v]++;
    }

    for (int i = 1; i <= n; i++)
        if (inDegree[i] == 0)
            q.push(i);

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        cout << x << " ";

        for (auto y : graph[x])
            if (--inDegree[y] == 0)
                q.push(y);
    }

    return 0;
}
