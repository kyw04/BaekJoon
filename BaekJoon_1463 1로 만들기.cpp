#include <iostream>

using namespace std;

long long dp[1000001];
int main() 
{
    int n;
    cin >> n;
    
    for (int i = 2; i <= n; i++)
    {
        // 1. n - 1
        dp[i] = dp[i - 1] + 1;
        
        // 2. n / 2
        if (i % 2 == 0)
            dp[i] = min(dp[i], dp[i / 2] + 1);
            
        // 3. n / 3
        if (i % 3 == 0)
            dp[i] = min(dp[i], dp[i / 3] + 1);
    }
    
    cout << dp[n] << '\n';
    
    return 0;
}
