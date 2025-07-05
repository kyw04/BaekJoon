#include <iostream>
#include <vector>
#define MAX 200001
#define ULL unsigned long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    ULL arr[MAX];
    bool is_close[MAX] = {};
    int n, q;
    ULL sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum << '\n';
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int cmd, idx, power;
        cin >> cmd;
        
        switch (cmd)
        {
        case 1:
            cin >> idx >> power;
            idx--;
            if (!is_close[idx])
                sum += power - arr[idx];
            arr[idx] = power;
            break;
        case 2:
            cin >> idx;
            idx--;
            is_close[idx] = !is_close[idx];
            sum += is_close[idx] ? -arr[idx] : arr[idx];
            break;
        }
        
        cout << sum << '\n';
    }
    
    return 0;
}
