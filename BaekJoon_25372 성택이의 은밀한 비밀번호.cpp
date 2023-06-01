#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	while (n--)
	{
		string str;
		cin >> str;
		
		if (str.size() >= 6 && str.size() <= 9)
		{
			for (int i = 0; i < n; i++)
			{
				if (str[i] < '0' && str[i] > '9')
				{
					cout << "no\n";
					return 0;
				}
			}
			
			cout << "yes\n";
		}
		else
			cout << "no\n";
	}
	
	return 0;
}
