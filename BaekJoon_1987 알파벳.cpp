#include <iostream>
#include <algorithm>

using namespace std;

char map[21][21];
int visited[27];
int R, C, answer;

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

void f(int x, int y, int cnt)
{
	answer = max(answer, cnt);
	
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if (nx >= 0 && ny >= 0 && nx < R && ny < C)
		{
			if (visited[map[nx][ny] - 'A'] == 0)
			{
				visited[map[nx][ny] - 'A'] = 1;
				f(nx, ny, cnt + 1);
				visited[map[nx][ny] - 'A'] = 0;
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	
	cin >> R >> C;

	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			cin >> map[i][j];
		}
	}
	
	visited[map[0][0] - 'A'] = 1;
	f(0, 0, 1);
	
	cout << answer;

	return 0;
}
