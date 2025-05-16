#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
#define MIN numeric_limits<int>::min()

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    vector<pair<int, int>> arr;
    int n;
    cin >> n;
    while (n--)
    {
        int s, e;
        cin >> s >> e;
        arr.push_back({ s, e });
    }
    
    sort(arr.begin(), arr.end());
    
    int result = 0;
    int start = MIN;
    int end = MIN;
    for (auto a : arr)
    {
        if (end < a.first)
        {
            result += end - start;
            start = a.first;
        }
        if (end < a.second)
            end = a.second;
    }
    result += end - start;
    
    cout << result;
    
    return 0;
}
