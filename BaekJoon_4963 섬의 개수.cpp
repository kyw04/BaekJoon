#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int w, h;
    while (cin >> w >> h)
    {
        if (!w && !h)
            break;
        
        queue<pair<int, int>> q;
        bool visited[h][w] = {};
        int world[h][w];
        int move[] = { -1, 0, 1 };
        int res = 0;
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                cin >> world[i][j];
                if (world[i][j])
                    q.push({ i, j });
            }
        }
        
        while (!q.empty())
        {
            auto [cur_y, cur_x] = q.front();
            q.pop();
            
            if (visited[cur_y][cur_x])
                continue;
            
            queue<pair<int, int>> island;
            island.push({ cur_y, cur_x });
            res++;
            
            while (!island.empty())
            {
                auto [y, x] = island.front();
                island.pop();
                
                if (visited[y][x])
                    continue;
                visited[y][x] = 1;
                
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        int new_x = x + move[i];
                        int new_y = y + move[j];
                        
                        if (new_x >= 0 && new_x < w &&
                            new_y >= 0 && new_y < h &&
                            world[new_y][new_x])
                            island.push({ new_y, new_x });
                    }
                }
            }
        }
        
        cout << res << '\n';
    }
    
    return 0;
}
