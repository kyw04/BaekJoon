#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    
    int left = 1;
    int right = k;
    int result = 0;
    while (1)
    {
        if (left > right)
            break;
        
        int mid = (left + right) / 2;
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            count += min(n, mid / i);
        }
        
        if (count < k)
        { 
            left = mid + 1;
        }
        else
        {
            result = mid;
            right = mid - 1;
        }
    }
    
    cout << result;
    
    return 0;
}
