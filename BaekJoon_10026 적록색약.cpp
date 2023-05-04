#include <iostream>
#include <queue>

using namespace std;

queue<pair<int, int>> q;
char paint[101][101];
int visited[101][101];
int dx[4]={ -1, 0, 1, 0 }, dy[4]={ 0, 1, 0, -1 };
int n, cnt;

void search(char color)
{
	while(!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		
		for (int i = 0; i < 4; i++)
		{
			int newX = x + dx[i];
			int newY = y + dy[i];
			
			if (color == paint[newX][newY] && !visited[newX][newY])
			{
				q.push({ newX, newY });
				visited[newX][newY] = 1;
			}
		}
	}
}

void search(char first_color, char second_color)
{
	while(!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		
		for (int i = 0; i < 4; i++)
		{
			int newX = x + dx[i];
			int newY = y + dy[i];
			
			if ((first_color == paint[newX][newY] || second_color == paint[newX][newY]) && !visited[newX][newY])
			{
				q.push({ newX, newY });
				visited[newX][newY] = 1;
			}
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> paint[i][j];	
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visited[i][j])
			{
				cnt++;
				visited[i][j] = 1;
				q.push({ i, j });
				search(paint[i][j]);
			}
		}
	}
	cout << cnt << ' ';
	
	cnt = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			visited[i][j] = 0;
	while(!q.empty())
		q.pop();
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visited[i][j])
			{
				cnt++;
				visited[i][j] = 1;
				q.push({ i, j });
				
				if (paint[i][j] == 'R' || paint[i][j] == 'G')
					search('R', 'G');
				else
					search('B');
			}
		}
	}
	cout << cnt;
	
	return 0;
}
