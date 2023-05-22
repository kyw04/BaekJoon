#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();

	while (n--)
	{
		string s;
		getline(cin, s);

		stringstream words(s);

		string word;
		while (words >> word)
		{
			for (string::reverse_iterator iter = word.rbegin(); iter != word.rend(); iter++)
			{
				cout << *iter;
			}
			cout << ' ';
		}
		cout << '\n';
	}

	return 0;
}
