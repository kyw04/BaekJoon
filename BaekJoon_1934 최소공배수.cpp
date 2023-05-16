#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int tc;
	cin >> tc;
	
	while (tc--)
	{
		int a, b;
		cin >> a >> b;
		int multipleA = a, multipleB = b;
		int i = 2, j = 2;
		
		while (multipleA != multipleB)
		{
			if (multipleA < multipleB)
				multipleA = a * i++;
			else
				multipleB = b * j++;
		}
		
		cout << multipleA << '\n';
	}
	
	return 0;
}
