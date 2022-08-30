#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	unordered_map<string, string> um;
	unordered_map<string, string> um2;
	int n, m;
	cin >> n >> m;
	
	for (int i = 0; i < n; i++)
	{
		string input;
		string number = to_string(i + 1);
		cin >> input;
		um.insert({ number, input });
		um2.insert({ input, number });
	}
	
	for (int i = 0; i < m; i++)
	{
		string input;
		cin >> input;
		auto iter = um.find(input);
		if (iter != um.end())
			cout << iter->second << '\n';
		else 
		{
			iter = um2.find(input);
			if (iter != um2.end())
				cout << iter->second << '\n';
		}
	}
	
	return 0;
}
