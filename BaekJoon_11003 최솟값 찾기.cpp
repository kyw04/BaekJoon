#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	deque<pair<int, int>> arr;
	int n, l;
	cin >> n >> l;
	
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		
		while(!arr.empty() && arr.back().second >= input)
			arr.pop_back();
		arr.push_back({ i, input });
		
		if (arr.front().first <= (i - l))
			arr.pop_front();
		
		cout << arr.front().second << ' ';
	}
	
	return 0;
}
