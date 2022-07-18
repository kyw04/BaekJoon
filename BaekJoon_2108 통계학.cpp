#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

typedef struct _counting
{
    int value;
    int count;
}counting;

int arr[500001];
counting cnt[8002];
int n;
int avg;

bool compare(counting a, counting b)
{
    if (a.count > b.count)
        return 1;
    else if (a.count < b.count)
        return 0;
        
    if (a.value > b.value)
        return 0;
    else
        return 1;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    
    for (int i = 0; i < 8002; i++)
    {
        if (i > 4000)
            cnt[i].value = -i + 4000;
        else
            cnt[i].value = i;
            
        cnt[i].count = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        
        arr[i] = input;
        
        avg += input;
        
        int temp = input >= 0 ? input : -input + 4000;
        cnt[temp].count++;
    }
    avg = round((double)avg / n);
    
    sort(arr, arr + n);
    sort(cnt, cnt + 8002, compare);
    
    cout << fixed;
    cout.precision(0);
    
    cout << avg << '\n';
    cout << arr[n / 2] << '\n';
    if (cnt[0].count != cnt[1].count)
        cout << cnt[0].value << '\n';
    else
        cout << cnt[1].value << '\n';
    cout << arr[n - 1] - arr[0];
    
    return 0;
}
