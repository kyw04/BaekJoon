#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
	int len1 = a.length();
	int len2 = b.length();
	if (len1 < len2)
		return true;
	else if (len1 > len2)
		return false;
	else
	{
		if (a < b)
			return true;
		else
			return false;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	vector<string> v(n);
	vector<string> result(n);
	for (auto& a : v)
		cin >> a;

	sort(v.begin(), v.end(), compare);
	string t = "";
	int i = 0;
	for (auto& a : v)
	{
		if (a != t)
		{
			result[i++] = a;
			t = a;
		}
	}
	result.resize(i);

	for (auto& a : result)
		cout << a << '\n';
	return 0;
}
