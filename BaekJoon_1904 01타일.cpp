#include <iostream>

using namespace std;

int dp[1000001] = { 1, 1 };
int f(int n)
{
	if (n <= 1)
		return 1;
	
	if (dp[n])
		return dp[n];
		
	return dp[n] = (f(n - 1) + f(n - 2)) % 15746;
}
int main()
{
	int n;
	cin >> n;
	
	f(n);
	
	return 0;
}
