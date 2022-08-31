#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	unordered_map<int, int> um;
	int n, m;
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		auto iter = um.find(input);
		if (!um.empty() && iter != um.end())
			iter->second++;
		else
			um.insert({input, 1});
	}
	
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int input;
		cin >> input;
		auto iter = um.find(input);
		if (iter != um.end())
			cout << iter->second << ' ';
		else
			cout << 0 << ' ';
	}	
	return 0;
}
