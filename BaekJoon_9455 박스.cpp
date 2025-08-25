#include <iostream>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int arr[101][101] = {};
        int height[101] = {};
        int n, m, res = 0;
        cin >> n >> m;
        
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j])
                    height[j]++;
                else
                    res += height[j];
            }
        }
        
        cout << res << '\n';
    }
    
    return 0;
}
