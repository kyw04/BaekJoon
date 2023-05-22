#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	while (n--)
	{
		string s;
		cin.ignore();
		getline(cin, s);

		stringstream words(s);
		words.str(s);
		
		string word;
		while(words >> word)
		{
			cout << word << '\n';
		}
	}
	
	return 0;
}
