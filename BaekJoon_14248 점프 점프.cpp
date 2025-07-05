#include <iostream>
#include <queue>
#define MAX 100001

using namespace std;

queue<pair<int, int>> q;
int visited[MAX];
int stone[MAX];
int n, s, res;
int check(int idx)
{
    if (idx < 1 || idx > n || visited[idx])
        return 0;
    
    q.push({ idx, stone[idx] });
    return visited[idx] = 1;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> stone[i];
    cin >> s;
    
    q.push({ 0, s });
    while (!q.empty())
    {
        auto [idx, jump] = q.front();
        q.pop();
        
        int left = idx - jump;
        int right = idx + jump;
        res += check(left);
        res += check(right);
    }
    
    cout << res;
    
    return 0;
}
