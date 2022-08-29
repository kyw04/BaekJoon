#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	char color[2] = { 'W', 'B' };
	vector<string> bord;
	int n, m, minN = 32;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		bord.push_back(input);
	}

	int cnt1 = 0, cnt2 = 0;
	for (int curI = 0; curI < n - 7; curI++)
	{
		for (int curJ = 0; curJ < m - 7; curJ++)
		{
			cnt1 = 0, cnt2 = 0;
			for (int i = curI; i < curI + 8; i++)
			{
				for (int j = curJ; j < curJ + 8; j++)
				{
					if (bord[i][j] == color[(i + j) % 2 == 0])
						cnt1++;
					else
						cnt2++;
				}
			}
			minN = min(minN, min(cnt1, cnt2));
		}
	}

	cout << minN;

	return 0;
}
