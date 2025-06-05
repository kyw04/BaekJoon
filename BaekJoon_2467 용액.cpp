#include <iostream>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int arr[100001];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int a = 1000000001, b = 1000000001;
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        if (abs(a + b) > abs(arr[left] + arr[right]))
        {
            a = arr[left] < arr[right] ? arr[right] : arr[left];
            b = arr[left] < arr[right] ? arr[left] : arr[right];
        }
        
        if (!(a + b))
            break;
        
        
        
        if (abs(arr[left]) < abs(arr[right]))
            right--;
        else
            left++;
    }
    
    cout << b << ' ' << a;

    return 0;
}
