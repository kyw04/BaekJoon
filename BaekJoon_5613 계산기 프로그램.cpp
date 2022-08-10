#include <iostream>

using namespace std;

int main()
{
	int number, sum;
	char cmd;
	
	cin >> number;
	sum = number;
	
	while (true)
	{
		cin >> cmd;
		if (cmd == '=')
			break;
		cin >> number;
		
		if (cmd == '+')
		{
			sum += number;
		}
		else if (cmd == '-')
		{
			sum -= number;
		}
		else if (cmd == '*')
		{
			sum *= number;
		}
		else if (cmd == '/')
		{
			sum /= number;
		}
	}
	
	cout << sum;
	
	return 0;
}
