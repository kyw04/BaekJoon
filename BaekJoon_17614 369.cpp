#include <iostream>

using namespace std;

int main()
{
	int n, cnt = 0;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		int number = i;
		
		while (number)
		{
			int one = number % 10;
			if (one && one % 3 == 0)
				cnt++;
			number /= 10;
		}
	}
	
	cout << cnt;
	
	return 0;
}
