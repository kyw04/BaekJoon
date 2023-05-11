#include <iostream>
#include <map>

using namespace std;

int main()
{
	int tc;
	cin >> tc;

	while (tc--)
	{
		map<string, int> m;
		int n, result = 1;
		cin >> n;

		while (n--)
		{
			string name, type;
			cin >> name >> type;

			map<string, int>::iterator iter = m.find(type);
			if (iter != m.end())
				iter->second++;
			else
				m.insert({ type, 1 });
		}

		for (map<string, int>::iterator iter = m.begin(); iter != m.end(); iter++)
			result *= iter->second + 1;
		result--;

		cout << result << '\n';
	}

	return 0;
}
