#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 501

using namespace std;

int dp[MAX][MAX];
int arr[MAX][MAX];
int n;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            cin >> arr[i][j];
    
    dp[0][0] = arr[0][0];
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j > 0)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + arr[i][j];
            else
                dp[i][j] = dp[i - 1][j] + arr[i][j];
        }
    }
    
    int result = 0;
    for (int i = 0; i < n; i++)
        result = max(dp[n - 1][i], result);
    
    cout << result;
    
    return 0;
}
