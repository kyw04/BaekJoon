#include <iostream>

using namespace std;

int main()
{
	int result, n, sum = 0;
	cin >> result >> n;
	
	while (n--)
	{
		int price, mul;
		cin >> price >> mul;
		
		sum += price * mul;
	}
	
	if (result == sum)
		cout << "Yes";
	else
		cout << "No";
	
	return 0;
}
