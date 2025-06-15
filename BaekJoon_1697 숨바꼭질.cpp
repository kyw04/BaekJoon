#include <iostream>
#include <algorithm>
#include <queue>
#define MAX 100001

using namespace std;

queue<pair<int, int>> q;
int visited[MAX];
int n, k, res;
int main()
{
    cin >> n >> k;
    
    q.push({ n , 0 });
    visited[n] = 1;
    while (!q.empty())
    {
        int cur = q.front().first;
        int sec = q.front().second;
        q.pop();
        
        if (cur == k)
            res = sec;
        
        if (cur * 2 < MAX && !visited[cur * 2])
        {
            visited[cur * 2] = 1;
            q.push({ cur * 2, sec + 1 });
        }
        if (cur + 1 >= 0 && cur + 1 < MAX && !visited[cur + 1])
        {
            visited[cur + 1] = 1;
            q.push({ cur + 1, sec + 1 });
        }
        if (cur - 1 >= 0 && cur - 1 < MAX && !visited[cur - 1])
        {
            visited[cur - 1] = 1;
            q.push({ cur - 1, sec + 1 });
        }
    }
    cout << res;
    
    return 0;
}
