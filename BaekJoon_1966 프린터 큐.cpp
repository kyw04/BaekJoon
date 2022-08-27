#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

struct Info
{
	int index;
	int value;
};

int compare(int a, int b)
{
	return a > b;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int tc;
	cin >> tc;
	
	while (tc--)
	{
		int n, m, cnt = 0;
		queue<Info> q;
		vector<int> ans;
		
		cin >> n >> m;
		
		for (int i = 0; i < n; i++)
		{
			int input;
			cin >> input;
			
			Info temp = {i, input};
			
			ans.push_back(input);
			q.push(temp);
		}
		
		sort(ans.begin(), ans.end(), compare);
		
		while (!q.empty())
		{
			if (q.front().value == ans[cnt])
			{
				cnt++;
				if (q.front().index == m)
				{
					cout << cnt << '\n';
				}
				q.pop();
			}
			else
			{
				q.push(q.front());
				q.pop();
			}
		}
	}
	
	return 0;
}
