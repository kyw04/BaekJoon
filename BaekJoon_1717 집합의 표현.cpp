#include <iostream>
#define SWAP(a, b) do { int t = a; a = b; b = t; } while(0);
#define MAX 1000002

using namespace std;

int parent[MAX];
int find_root(int x)
{
    if (x == parent[x])
        return x;
    
    return parent[x] = find_root(parent[x]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    for (int i = 0; i <= n; i++)
        parent[i] = i;
    for (int i = 0; i < m; i++)
    {
        int cmd, a, b;
        cin >> cmd >> a >> b;
        if (cmd)
        {
            int x = find_root(a);
            int y = find_root(b);
            
            if (x == y)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
        {
            int x = find_root(a);
            int y = find_root(b);
            
            if (x != y)
                parent[x] = y;
        }
    }
    
    return 0;
}
