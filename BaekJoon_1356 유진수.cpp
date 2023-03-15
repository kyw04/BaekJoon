#include <iostream>

using namespace std;

int main()
{
	string n;
	cin >> n;
	
	int zero_count = 0;
	long long sum1 = n[0] - '0', sum2 = 1;
	
	for (int i = 1; i < n.length(); i++)
	{
		sum2 *= n[i] - '0';
		if (n[i] == '0')
		{
			zero_count++;
			if (zero_count >= 2)
			{
				cout << "YES";
				return 0;
			}
		}
	}
	if (n.length() != 1 && sum1 == sum2)
	{
		cout << "YES";
		return 0;
	}
	if (zero_count != 0)
	{
		cout << "NO";
		return 0;
	}
	
	
	for (int i = 1; i < n.length(); i++)
	{
		if (n[i] != '0')
		{
			sum2 /= n[i] - '0';
			sum1 *= n[i] - '0';
		}
		
		if (sum1 == sum2)
		{
			cout << "YES";
			return 0;
		}
	}
	
	cout << "NO";
	
	return 0;
}
