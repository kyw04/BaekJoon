#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


vector<pair<int, int>> arr;
int n, b, res = 0;

int UseCoupon(pair<int, int> t)
{
    auto [total, price] = t;
    
    int send = total - price;
    total = price / 2 + send;
    
    return total;
}

int SendPresent(int budget, int use_coupon_index)
{
    int res = 0;
    
    for (int i = 0; i < n; i++)
    {
        int total = arr[i].first;
        if (use_coupon_index == i)
            continue;
        
        if (budget >= total)
        {
            budget -= total;
            res++;
        }
        else
            break;
    }
    
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n >> b;

    for (int i = 0; i < n; i++)
    {
        int p, s;
        cin >> p >> s;
        
        arr.push_back({ p + s, p });
    }
    
    sort(arr.begin(), arr.end());
    
    for (int i = 0; i < n; i++)
    {
        int budget = b - UseCoupon(arr[i]);
        if (budget < 0)
            continue;
        
        int cnt = SendPresent(budget, i) + 1;
        res = max(res, cnt);
    }
    
    cout << res;

    return 0;
}
