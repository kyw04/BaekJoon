#include <iostream>
#include <algorithm>
#define MAX 100001

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int arr[MAX];
    int n, x, res = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> x;
    
    sort(arr, arr + n);
    
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
                res++;
            if (arr[i] + arr[j] > x)
                break;
        }
    }
    
    cout << res;
    
    return 0;
}
