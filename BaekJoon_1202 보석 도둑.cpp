#include <iostream>
#include <algorithm>
#include <queue>
#define MAX 300001

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int bag[MAX] = {};
    pair<int, int> gem[MAX] = {};
    priority_queue<int> pq;
    int n, k;
    
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> gem[i].first >> gem[i].second;
    for (int i = 0; i < k; i++)
        cin >> bag[i];
    
    sort(gem, gem + n);
    sort(bag, bag + k);
    
    long long res = 0;
    for (int i = 0, idx = 0; i < k; i++)
    {
        while (idx < n && bag[i] >= gem[idx].first)
        {   
            pq.push(gem[idx].second);
            idx++;
        }
        if (!pq.empty())
        {
            res += pq.top();
            pq.pop();
        }
    }
  
    cout << res;
    
    return 0;
}
