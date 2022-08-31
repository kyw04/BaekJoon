#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main()
{
	int n, m;
	unordered_set<int> us;
	cin >> n >> m;
	
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		us.insert(input);
	}
	
	for (int i = 0; i < m; i++)
	{
		int input;
		cin >> input;
		
		auto iter = us.find(input);
		if (iter != us.end())
			us.erase(iter);
		else
			us.insert(input);
	}
	
	cout << us.size();
	
	return 0;
}
