#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<pair<int, int>> cnt; // pair<num, cnt>;
    int arr[1001];
    int n, res = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    cnt.push_back({ arr[0], 1 });
    for (int i = 1; i < n; i++)
    {
        int _max = 0;
        for (auto a : cnt)
            if (a.first < arr[i])
                _max = max(_max, a.second);
        _max++;
        res = max(res, _max);
        cnt.push_back({ arr[i], _max });
    }
    
    cout << res;
    
    return 0;
}
