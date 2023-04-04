#include <iostream>

using namespace std;

int main()
{
	int n, d = 0, p = 0;
	
	cin >> n;
	
	while(n--)
	{
		char winner;
		cin >> winner;
		
		if (winner == 'D')
			d++;
		else
			p++;
		
		
		if (d + 2 == p)
			break;
		else if (p + 2 == d)
			break;
	}
	
	cout << d << ":" << p;
	
	return 0;
}
