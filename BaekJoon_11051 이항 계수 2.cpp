#include <iostream>

using namespace std;

int dp[1001][1001];
int f(int n, int k)
{
    if (k == 0 || n == k)
        return 1;
    
    if (dp[n][k])
        return dp[n][k];
    
    return dp[n][k] = (f(n - 1, k)  + f(n - 1, k - 1)) % 10007;    
}

int main() 
{
    int n, k;
    cin >> n >> k;
    
    cout << f(n, k);
    
    return 0;
}
