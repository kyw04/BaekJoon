#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (auto& a : v)
		cin >> a;

	sort(v.begin(), v.end());
	cout << v[0] * v[n - 1];
	return 0;
}
