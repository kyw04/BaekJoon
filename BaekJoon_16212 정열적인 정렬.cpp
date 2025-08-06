#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    vector<int> arr;
    int n;
    cin >> n;
    while(n--)
    {
        int input;
        cin >> input;
        arr.push_back(input);
    }
    
    sort(arr.begin(), arr.end());
    
    for (auto& a : arr)
        cout << a << ' ';
    
    
    return 0;
}
