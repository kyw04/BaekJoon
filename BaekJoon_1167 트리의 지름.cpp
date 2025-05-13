#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <unordered_set>
#define MAX_SIZE 1001000

using namespace std;

vector<vector<pair<int, int>>> tree(MAX_SIZE);
int maxN, maxNode;
void DFS(int current_node, int cnt, unordered_set<int>& visited)
{
  	visited.insert(current_node);
    if (cnt > maxN)
    {
        maxN = cnt;
        maxNode = current_node;
    }
    
  	for (int i = 0; i < tree[current_node].size(); i++)
  	{
    		if (visited.find(tree[current_node][i].first) == visited.end())
    			  DFS(tree[current_node][i].first, cnt + tree[current_node][i].second, visited);
  	}
    
}

int main()
{
  	ios_base::sync_with_stdio(false);
  	cin.tie(NULL); cout.tie(NULL);
  
  	int n;
  	cin >> n;
  
  	for (int i = 0; i < n; i++)
  	{
    		int current_node, node, dst;
    		cin >> current_node;
    		while (true)
    		{
      			cin >> node;
      			if (node == -1)
      				  break;
      			cin >> dst;
      
      			tree[current_node].push_back({ node, dst });
    		}
  	}
    
		unordered_set<int> visited;
  	DFS(1, 0, visited);
    visited.clear();
    DFS(maxNode, 0, visited);
    
  	cout << maxN;
  
  	return 0;
}
