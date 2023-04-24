#include <iostream>

using namespace std;

int main()
{
	string str;
	cin >> str;
	
	for (string::iterator iter = str.begin(); iter != str.end(); iter++)
	{
		if (*iter >= 'a' && *iter <= 'z')
			*iter = (*iter - 'a') + 'A';
		else
			*iter = (*iter - 'A') + 'a';
	}
	
	cout << str;
	
	return 0;
}
