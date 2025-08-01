#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n;
    vector<long long> arr;
    long long _max = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        long long input;
        cin >> input;
        arr.push_back(input);
        _max = max(_max, input);
    }
    
    for (int i = 1; i < n - 1; i++)
    {
        _max = max(_max, arr[i] + min(arr[i - 1], arr[i + 1]));
    }
    
    cout << _max;
    
    return 0;
}
