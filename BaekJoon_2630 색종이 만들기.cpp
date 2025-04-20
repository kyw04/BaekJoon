#include <iostream>
#include <vector>

using namespace std;

int blue, white, n;
vector<vector<int>> paper;
int cutting(int n, int x, int y)
{
    if (n == 1)
        return paper[x][y];
    
    int half = n / 2;
    int temp[2][2];
    temp[0][0] = cutting(half, x, y);
    temp[1][0] = cutting(half, x + half, y);
    temp[0][1] = cutting(half, x, y + half);
    temp[1][1] = cutting(half, x + half, y + half);
    
    if (temp[0][0] == temp[1][0] &&
        temp[0][0] == temp[0][1] &&
        temp[0][0] == temp[1][1])
    {
        return temp[0][0];
    }
    else
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (temp[i][j] == -1)
                    continue;
                
                temp[i][j] ? blue++ : white++;
            }
        }
        
        return -1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin >> n;
    
    paper.resize(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int input;
            cin >> input;
            paper[i].push_back(input);
        }
    }
    
    int color = cutting(n, 0, 0);
    if (color != -1)
        color ? blue++ : white++;
    
    cout << white << '\n';
    cout << blue;

    return 0;
}
