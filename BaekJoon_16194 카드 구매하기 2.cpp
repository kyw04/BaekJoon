#include <iostream>

using namespace std;

int main()
{
	int p[1001], dp[1001] = {};
	int n;

	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		cin >> p[i];
	}
	
	for (int i = 1; i <= n; i++)
	{
		dp[i] = p[i];
		
		for (int j = 1; j <= i; j++)
		{
			dp[i] = min(dp[i], dp[i - j] + dp[j]);
		}
	}
	
	cout << dp[n];
	
	return 0;
}
