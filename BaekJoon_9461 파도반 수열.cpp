#include <iostream>

using namespace std;

long long dp[101] = { 0, 1, 1, 1, 2, };
int main() 
{
    int n, tc;
    
    for (int i = 5; i <= 100; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 5];
    }
    
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        cout << dp[n] << '\n';
    }
    
    return 0;
}
