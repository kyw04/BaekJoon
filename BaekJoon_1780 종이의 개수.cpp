#include <iostream>
#include <vector>
#define NONE -2

using namespace std;

int result[3];
vector<vector<int>> paper;
int cutting(int x, int y, int n)
{
    int color = paper[x][y];
    if (n == 1)
        return color;
    
    bool same_color = true;
    vector<vector<int>> temp(3);
    int pos[] = { 0, 1, 2 };
    int cut = n / 3;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            temp[i].push_back(cutting(x + cut * pos[i], y + cut * pos[j], n / 3));
            if (temp[i][j] != color)
                same_color = false;
        }
    }
    
    if (same_color)
    {
        return color;
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (temp[i][j] == NONE) continue;
                result[temp[i][j] + 1]++;
            }
        }
        
        return NONE;
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
    
    int color = cutting(0, 0, n);
    if (color != NONE)
        result[color + 1]++;
    
    for (auto& r : result)
        cout << r << '\n';
    
    return 0;
}
