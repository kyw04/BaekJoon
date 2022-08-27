#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	stack<int> s;
	vector<int> v;
	int n;
	cin >> n;
	
	vector<int> ans(n);
	
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		v.push_back(input);
	}
	
	for (int i = n - 1; i >= 0; i--)
	{
		while (!s.empty() && s.top() <= v[i])
			s.pop();
		
		if (s.empty()) ans[i] = -1;
		else ans[i] = s.top();
		
		s.push(v[i]);
	}
	
	for (int i = 0; i < n; i++)
		cout << ans[i] << ' ';
	
	return 0;
}
