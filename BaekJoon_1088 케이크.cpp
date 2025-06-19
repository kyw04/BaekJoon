#include <iostream>
#include <algorithm>
#include <queue>
#define MAX 1000000001
using namespace std;

struct Info
{
    double value;
    int index, count;
    
    bool operator<(const Info& other) const
    {
        return value < other.value;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    priority_queue<Info> pq;
    double arr[51];
    int n, m;
    double min_v = MAX;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        pq.push({ arr[i], i, 1 });
        min_v = min(min_v, arr[i]);
    }
    cin >> m;
    
    double res = pq.top().value - min_v;
    for (int i = 0; i < m; i++)
    {
        auto [val, idx, cnt] = pq.top();
        pq.pop();
        val = arr[idx] / ++cnt;
        pq.push({ val, idx, cnt });
        min_v = min(min_v, val);
        res = min(res, pq.top().value - min_v);
    }
    
    cout << fixed;
    cout.precision(16);
    cout << res;
    
    return 0;
}
