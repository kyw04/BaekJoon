#include <iostream>
#include <vector>
#include <set>

using namespace std;

vector<vector<int>> graph(1001);
set<int> visited;
int n, cnt = 0;

void dfs(int current_node)
{
	visited.insert(current_node);
	
	for (auto it = graph[current_node].begin(); it != graph[current_node].end(); it++)
	{
		if (visited.find(*it) == visited.end())
			dfs(*it);
	}
}

int main()
{
	int tc;
	cin >> tc;
	
	while (tc--)
	{
		cnt = 0;
		cin >> n;
		
		for (int i = 0; i <= n; i++)
			graph[i].clear();
		visited.clear();
		
		for (int i = 0; i < n; i++)
		{
			int node;
			cin >> node;
			
			graph[i + 1].push_back(node);
		}
		
		for (int i = 1; i <= n; i++)
		{
			if (visited.find(i) == visited.end())
			{
				dfs(i);
				cnt++;
			}
		}
		
		cout << cnt << '\n';
	}
	
	return 0;
}
