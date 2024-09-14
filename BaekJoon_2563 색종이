#include <iostream>

using namespace std;

int result_paper[101][101];

int main()
{
    int n, result = 0;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        
        for (int i = x; i < x + 10; i++)
        {
            for (int j = y; j < y + 10; j++)
            {
                result_paper[i][j] = 1;
            }
        }
    }
    
    for (int i = 1; i < 101; i++)
    {
        for (int j = 1; j < 101; j++)
        {
            if (result_paper[i][j])
                result++;
        }
    }
    
    cout << result;
    
    return 0;
}
