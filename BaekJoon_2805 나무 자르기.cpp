#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 2000000000

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    vector<int> wood;
    int n;
    long long m, res = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        wood.push_back(input);
    }
    
    sort(wood.begin(), wood.end(), greater<int>());
    
    int left = 0;
    int right = wood[0];
    long long mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        long long sum = 0;
        for (auto a : wood)
        {
            if (mid >= a)
                break;
            
            sum += a - mid;
        }
        
        if (sum < m)
            right = mid - 1;
        else
        {
            res = max(mid, res);
            left = mid + 1;
        }
    }
    
    cout << res;
    
    return 0;
}
