#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 100001

using namespace std;

int dp[MAX];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, k;
    vector<pair<int, int>> objects; // w, v
    
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int w, v;
        cin >> w >> v;
        objects.push_back({ w, v });   
    }
    
    for (auto obj : objects)
    {
        int w = obj.first, v = obj.second;
        for (int i = k; i >= w; i--)
        {
            dp[i] = max(dp[i], dp[i - w] + v);
        }
    }
    
    cout << dp[k];
    
    return 0;
}
