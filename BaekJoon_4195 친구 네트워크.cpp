#include <iostream>
#include <map>

using namespace std;

map<string, pair<string, int>> parent;
pair<string, int> find_root(string x)
{
    if (x == parent[x].first)
        return parent[x];
    
    return parent[x] = find_root(parent[x].first);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int tc;
    cin >> tc;
    while (tc--)
    {
        parent.clear();
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string a, b;
            cin >> a >> b;
            if (parent.find(a) == parent.end())
                parent[a] = { a, 1 };
            if (parent.find(b) == parent.end())
                parent[b] = { b, 1 };
            
            auto x = find_root(a);
            auto y = find_root(b);
            
            if (x != y)
            {
                int sum = x.second + y.second;
                parent[y.first] = { x.first, sum };
                parent[x.first].second = sum;
            }
            cout << parent[y.first].second << '\n';
        }
    }
    
    return 0;
}
