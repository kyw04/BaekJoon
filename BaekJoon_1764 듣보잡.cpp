#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	unordered_set<string> us;
	vector<string> order;
	int n, m;
	cin >> n >> m;
	
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		us.insert(input);
	}
	
	for (int i = 0; i < m; i++)
	{
		string input;
		cin >> input;
		
		auto iter = us.find(input);
		
		if (iter != us.end())
			order.push_back(input);
	}
	
	sort(order.begin(), order.end());
	
	cout << order.size() << '\n';
	for (auto iter = order.begin(); iter != order.end(); iter++)
		cout << *iter << '\n';
	
	return 0;	
}
