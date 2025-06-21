#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

vector<int> rule[1001];
int times[1001];
int dp[1001];
int indegree[1001];
int n, k, w;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            cin >> times[i];   
            rule[i].clear();
            dp[i] = 0;
            indegree[i] = 0;
        }
        for (int i = 1; i <= k; i++)
        {
            int x, y;
            cin >> x >> y;
            rule[x].push_back(y);
            indegree[y]++;
        }
        cin >> w;
        
        queue<int> q;
        for (int i = 1; i <= n; i++)
        {
            if (indegree[i] == 0)
            {
                dp[i] = times[i];
                q.push(i);
            }
        }
        
        while (!q.empty())
        {
            int cur = q.front();
            q.pop();
            
            for (int i = 0; i < rule[cur].size(); i++)
            {
                int next = rule[cur][i];
                
                if (next > 0)
                {
                    dp[next] = max(dp[next], dp[cur] + times[next]);
                    if (--indegree[next] == 0)
                        q.push(next);
                }
                
            }
        }
        
        cout << dp[w] << '\n';
    }
    
    return 0;
}
