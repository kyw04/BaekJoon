#include <iostream>
#include <queue>
#include <vector>
#define MAX 51

using namespace std;

int main()
{
    queue<int> q;
    vector<int> tree[MAX] = {};
    int visited[MAX] = {};
    int n, root, cut, leaf = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int parent;
        cin >> parent;
        if (parent == -1)
            root = i;
        else
            tree[parent].push_back(i);
    }
    cin >> cut;
    
    q.push(root);
    if (root == cut)
    {
        cout << 0;
        return 0;
    }
    
    while (!q.empty())
    {
        int cur = q.front();
        q.pop();
        
        if (visited[cur])
            continue;
        visited[cur] = 1;
        
        if (tree[cur].empty())
            leaf++;
    
        for (auto child : tree[cur])
        {
            q.push(child);
            
            if (child == cut)
            {
                visited[child] = 1;
                if (tree[cur].size() == 1)
                    leaf++;
            }
        }
    }
    
    cout << leaf;
    
    return 0;
}
