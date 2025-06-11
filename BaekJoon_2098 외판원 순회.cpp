#include <iostream>
#include <algorithm>
#include <vector>
#define MAX_N 16
#define INF 1e8

using namespace std;

int n;
int w[MAX_N][MAX_N];
vector<int> dp[MAX_N];

int TSP(int cur, int visited)
{
    if (visited == (1 << n) - 1)
        return w[cur][0] ? w[cur][0] : INF;
    
    if (dp[cur][visited] != -1)
        return dp[cur][visited];
    
    dp[cur][visited] = INF;
    for (int i = 0; i < n; i++)
    {
        if (!(visited & (1 << i)) && w[cur][i])
        {
            int cost = w[cur][i] + TSP(i, visited | (1 << i));
            dp[cur][visited] = min(cost, dp[cur][visited]);
        }
    }
    
    return dp[cur][visited];
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> w[i][j];
    for (int i = 0; i < n; i++)
        dp[i].resize((1 << n) - 1, -1);
    
    cout << TSP(0, 1);
    
    return 0;
}
