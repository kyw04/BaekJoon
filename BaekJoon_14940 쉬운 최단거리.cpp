#include <iostream>
#include <algorithm>
#include <queue>
#define MAX 1001
#define NONE -1

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int arr[MAX][MAX];
    int res[MAX][MAX];
    int n, m;
    pair<int, int> start;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 2)
            {
                start = { i , j };
                res[i][j] = 0;
            }
            else
                res[i][j] = NONE;
        }
    }
    
    int move_x[] = { -1, 1, 0, 0 };
    int move_y[] = { 0, 0, -1, 1 };
    queue<pair<int, int>> q;
    q.push(start);
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++)
        {
            int new_x = x + move_x[i];
            int new_y = y + move_y[i];
            
            if (new_x >= 0 && new_x < n && new_y >= 0 && new_y < m &&
                arr[new_x][new_y] != 0 && res[new_x][new_y] == NONE)
            {
                res[new_x][new_y] = res[x][y] + 1;
                q.push({ new_x, new_y });
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
                cout << 0 << ' ';
            else
                cout << res[i][j] << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}
