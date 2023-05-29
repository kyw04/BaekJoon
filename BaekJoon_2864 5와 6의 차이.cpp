#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a, b;
	int min = 0, max = 0;
	cin >> a >> b;
	
	for (int i = 0; a; i++)
	{
		int temp = a % 10;
		a /= 10;
		
		if (temp == 5 || temp == 6)
		{
			min += 5 * pow(10, i);
			max += 6 * pow(10, i);
		}
		else
		{
			min += temp * pow(10, i);
			max += temp * pow(10, i);
		}
	}
	
	for (int i = 0; b; i++)
	{
		int temp = b % 10;
		b /= 10;
		
		if (temp == 5 || temp == 6)
		{
			min += 5 * pow(10, i);
			max += 6 * pow(10, i);
		}
		else
		{
			min += temp * pow(10, i);
			max += temp * pow(10, i);
		}
	}
	
	cout << min << ' ' << max;
	
	return 0;
}
