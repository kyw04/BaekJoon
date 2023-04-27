#include <iostream>

using namespace std;

int main()
{
	string str1, str2;
	int n;
	cin >> n;
	
	while(n--)
	{
		cin >> str1 >> str2;
		cout << "Distances: ";
		
		for (int i = 0; i < str1.size(); i++)
		{
			int left = str2[i] - 'A' + 1;
			int right = str1[i] - 'A' + 1;
			
			if (left < right)
			{
				left +=  26;
			}
			
			cout << left - right << ' ';
		}
		cout << '\n';
	}
	
	return 0;
}
