#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
	unordered_set<string> s;
	int n, m, cnt = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		s.insert(input);
	}

	for (int i = 0; i < m; i++)
	{
		string input;
		cin >> input;

		if (s.find(input) != s.end())
			cnt++;
	}

	cout << cnt;

	return 0;
}

