#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> arr;
	vector<int> dp;
	int n, maxN;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		arr.push_back(input);
		dp.push_back(input);
	}
	
	maxN = dp[0];
	for (int i = 1; i < n; i++)
	{
		dp[i] = max(dp[i], dp[i - 1] + arr[i]);
		maxN = max(dp[i], maxN);
	}
	
	cout << maxN;
	
	return 0;
}
