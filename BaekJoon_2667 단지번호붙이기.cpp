#pragma warning(disable: 4996)

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#define MAX 26

using namespace std;

queue<pair<int, int>> q;
vector<int> house_cnt;
int map[MAX][MAX], visited[MAX][MAX];
pair<int, int> pos_move[4] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };
int n, cnt;

void dfs()
{
	while (!q.empty())
	{
		pair<int, int> pos = q.front();
		q.pop();

		for (int i = 0; i < 4; i++)
		{
			int x = pos.first;
			int y = pos.second;

			x += pos_move[i].first;
			y += pos_move[i].second;

			if (map[x][y] && !visited[x][y])
			{
				house_cnt[house_cnt.size() - 1]++;

				visited[x][y] = 1;
				q.push({ x, y });
			}
		}
	}
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			scanf("%1d", &map[i][j]);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (map[i][j] && !visited[i][j])
			{
				cnt++;
				house_cnt.push_back(1);

				visited[i][j] = 1;
				q.push({ i, j });
				dfs();
			}
		}
	}

	sort(house_cnt.begin(), house_cnt.end());

	cout << cnt << '\n';
	for (int i = 0; i < house_cnt.size(); i++)
		cout << house_cnt[i] << '\n';


	return 0;
}
