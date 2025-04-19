#include <iostream>
#include <vector>

using namespace std;

int f(int n, vector<vector<int>> arr)
{
    if (n == 1)
        return arr[0][0];
    
    vector<vector<int>> temp(n / 2);
    for (int i = 0; i < n; i += 2)
    {
        for (int j = 0; j < n; j += 2)
        {
            int max[2] = { -10001, };
            for (int k = 0; k < 2; k++)
            {
                for (int l = 0; l < 2; l++)
                {
                    if (max[0] < arr[i + k][j + l])
                    {
                        max[1] = max[0];
                        max[0] = arr[i + k][j + l];
                    }
                    else if (max[1] < arr[i + k][j + l])
                    {
                        max[1] = arr[i + k][j + l];
                    }
                }
            }
            
            temp[i / 2].push_back(max[1]);
        }
    }
    
    return f(n / 2, temp);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int input;
            cin >> input;
            arr[i].push_back(input);
        }
    }
    
    cout << f(n, arr);
    
    return 0;
}
