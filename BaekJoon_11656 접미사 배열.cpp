#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<string> arr;
	string str;
	cin >> str;
	
	while (str.size())
	{
		arr.push_back(str);
		str.erase(str.begin(), str.begin() + 1);
	}
	
	sort(arr.begin(), arr.end());
	
	for (auto it = arr.begin(); it != arr.end(); it++)
		cout << *it << '\n';
	
	return 0;
}
