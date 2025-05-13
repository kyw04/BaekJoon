#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    vector<int> arr;
    int n, s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr.push_back(input);
    }
    cin >> s;
    
    int index = 0;
    while (index < n && s > 0)
    {
        int max_index = index;
        for (int i = index + 1; i <= min(n - 1, s + index); i++)
        {
            if (arr[max_index] < arr[i])
                max_index = i;
        }
        for (int i = max_index; i > index; i--)
        {
            swap(arr[i], arr[i - 1]);
            s--;
        }
        
        index++;
    }
    
    for (auto a : arr)
        cout << a << ' ';
    
    return 0;
}
