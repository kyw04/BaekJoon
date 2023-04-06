#include <iostream>
#include <queue>

using namespace std;

int map[101][101];
int visited[101];
queue<int> q;
int n, m, cnt;
int main()
{
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;

		map[x][y] = 1;
		map[y][x] = 1;
	}

	q.push(1);
	visited[1] = 1;

	while (!q.empty())
	{
		int x = q.front();
		q.pop();

		for (int i = 1; i <= n; i++)
		{
			if (!visited[i] && map[x][i] && x != i)
			{
				q.push(i);
				visited[i] = 1;
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}
