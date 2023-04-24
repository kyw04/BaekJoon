#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> o(m);
	vector<int> s(m);
	for (int i = 0; i < m; i++)
		cin >> s[i] >> o[i];

	sort(o.begin(), o.end());
	sort(s.begin(), s.end());
	int result = 0;
	do
	{
		int i = n >= 6 ? 6 : n;
		int temp = o[0] * i;
		temp = temp < s[0] ? temp : s[0];
		result += temp;
		n -= 6;
	} while (n > 0);

	cout << result;

	return 0;
}
