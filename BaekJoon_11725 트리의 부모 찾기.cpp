#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <unordered_set>
#define MAX_SIZE 100100

using namespace std;

vector<vector<int>> tree(MAX_SIZE);
int parents[MAX_SIZE];
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n - 1; i++)
	{
		int node1, node2;
		cin >> node1 >> node2;

		tree[node1].push_back(node2);
		tree[node2].push_back(node1);
	}

	queue<int> q;
	unordered_set<int> visited;

	q.push(1);
	visited.insert(1);

	while (!q.empty())
	{
		int current_node = q.front();
		q.pop();
		
		for (auto iter = tree[current_node].begin(); iter != tree[current_node].end(); iter++)
		{
			if (visited.find(*iter) == visited.end())
			{
				visited.insert(*iter);
				q.push(*iter);
				parents[*iter] = current_node;
			}
		}
	}

	for (int i = 2; i <= n; i++)
		cout << parents[i] << '\n';

	return 0;
}
