#include <iostream>

using namespace std;

int main()
{
	int n, temp = 1, cnt = 0;
	cin >> n;
	
	for (int i = 2; i <= n; i++)
	{
		temp *= i;
		
		while (temp % 10 == 0)
		{
			temp /= 10;
			cnt++;
		}
		
		temp %= 100000;
	}
	
	cout << cnt;
		
	return 0;
}
