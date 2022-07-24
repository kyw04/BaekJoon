#include <iostream>
#include <algorithm>

using namespace std;

int arr[1001][1001];
//int dp[1001][1001];
//int f(int n, int m) 
//{
//	if (n <= 0 || m <= 0)
//		return -1;
//	
//	if (n == 1 && m == 1)
//		return arr[n][m];
//		
//	if (dp[n][m])
//		return dp[n][m];
//	
//	return dp[n][m] = arr[n][m] + max(f(n - 1, m), max(f(n, m - 1), f(n - 1, m - 1)));
//} 

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> arr[i][j];
			
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			arr[i][j] += max(arr[i - 1][j], max(arr[i][j - 1], arr[i - 1][j - 1]));
	
	cout << arr[n][m];
//	cout << f(n, m);
	
	return 0;
}
