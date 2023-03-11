#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int i, j, n, m, cnt;

	cin >> n;
	
	for (i = 0; i < n; i++)
	{
		cin >> j >> m;
		cnt = 0;
		for (; j <= m; j++)
		{
			int t = j;
			while (t)
			{
				if (t && t % 10 == 0)
					cnt++;
				t /= 10;
			}
			if (j == 0)
				cnt++;
		}
		cout << cnt << '\n';
	}

	return 0;
}
