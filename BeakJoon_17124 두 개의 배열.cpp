#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
	    priority_queue<long long> A, B;
		int n, m;
		long long res = 0;

		cin >> n >> m;
		for (int i = 0; i < n; i++)
		{
			long long input;
			cin >> input;
			A.push(input);
		}
		for (int i = 0; i < m; i++)
		{
			long long input;
			cin >> input;
			B.push(input);
		}

		int idx = 0;
		long long min_v = 10e8;
		while (!A.empty())
		{
			long long a = A.top();
			A.pop();
			
			while (!B.empty())
			{
				long long b = B.top();
                
				if (abs(a - min_v) >= abs(a - b))
				{
				    min_v = b;
				    B.pop();
				}
				else
				    break;
			}
			res += min_v;
		}

		cout << res << '\n';
	}

	return 0;
}
