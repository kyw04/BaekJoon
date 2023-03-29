#include <iostream>
#include <unordered_set>

using namespace std;

unordered_set<string> result;
string choice[4];
string card[10] = {};
bool visited[10];
int n, k;

void dfs(int cnt)
{
	if (cnt == k)
	{
		string number = "";
		for (int i = 0; i < k; i++)
			number += choice[i];

		if (result.find(number) == result.end())
			result.insert(number);

		return;
	}

	for (int i = 0; i < n; i++)
	{
		if (!visited[i])
		{
			visited[i] = true;
			choice[cnt] = card[i];
			dfs(cnt + 1);
			visited[i] = false;
		}
	}
}

int main()
{
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> card[i];
	}

	dfs(0);

	cout << result.size();

	return 0;
}
