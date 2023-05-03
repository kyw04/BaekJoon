#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Compare(int a, int b)
{
	return a > b;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	vector<int> v;
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		v.push_back(input);
	}
	
	sort(v.begin(), v.end(), Compare);
	
	for (int i = 0; i < n; i++)
		cout << v[i] << '\n';
		
	return 0;
}
