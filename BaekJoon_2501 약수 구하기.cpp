#include <iostream>

using namespace std;

int main()
{
	int arr[10001] = {};
	int n, k;
	cin >> n >> k;
	
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			k--;
			if (!k)
			{
				cout << i;
				return 0;
			}
		}
	}
	cout << 0;
	
	return 0;
}
