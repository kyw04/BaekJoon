#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, s = 0;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	for (auto& i : a)
		cin >> i;
	for (auto& i : b)
		cin >> i;

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	for (int i = 0; i < n; i++)
		s += a[i] * b[n - i - 1];

	cout << s;
	return 0;
}
