#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int tomato[1001][1001];
    queue<pair<int, int>> ripe;
    int n, m, unripe = 0, res = 0;
    cin >> n >> m;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> tomato[i][j];
            if (tomato[i][j] == 1)
                ripe.push({ i, j });
            if (tomato[i][j] == 0)
                unripe++;
        }
    }
    
    int move_x[] = { 1, -1, 0, 0 };
    int move_y[] = { 0, 0, 1, -1 };
    while (!ripe.empty())
    {
        res++;
        int ripe_tomato = ripe.size();
        for (int i = 0; i < ripe_tomato; i++)
        {
            int x = ripe.front().first;
            int y = ripe.front().second;
            ripe.pop();
            
            for (int j = 0; j < 4; j++)
            {
                int new_x = x + move_x[j];
                int new_y = y + move_y[j];
                if (new_x >= 0 && new_x < n &&
                    new_y >= 0 && new_y < m &&
                    tomato[new_x][new_y] == 0)
                {
                    tomato[new_x][new_y] = 1;
                    ripe.push({ new_x, new_y });
                    unripe--;
                }
            }
        }
        
    }
    
    if (unripe)
        cout << -1;
    else
        cout << res - 1;
    
    return 0;
}
