#include <iostream>

using namespace std;

int main()
{
	char first[11], last[11];
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		
		first[i] = *str.begin();
		last[i] = *(str.end() - 1);
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << first[i] << last[i] << endl;
	}
	
	return 0;
}
