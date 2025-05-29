#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n;
    vector<int> arr;
    cin >> n;
    if (!n)
    {
        cout << 0;
        return 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr.push_back(input);
    }
    sort(arr.begin(), arr.end());
    
    int cut = round(float(n * 0.15f));
    int sum = 0;
    for (int i = cut; i < n - cut; i++)
        sum += arr[i];
    cout << round(sum / (n - cut * 2.0));
    
    return 0;
}
