#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<string> s;
	int n;
	cin >> n;

	while (n--)
	{
		string name, cmd;
		cin >> name >> cmd;

		if (cmd == "enter")
		{
			s.insert(name);
		}
		else if (cmd == "leave" && s.find(name) != s.end())
		{
			s.erase(name);
		}
	}

	for (set<string>::reverse_iterator reit = s.rbegin(); reit != s.rend(); reit++)
		cout << *reit << '\n';

	return 0;
}
