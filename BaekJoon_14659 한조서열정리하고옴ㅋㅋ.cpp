#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, _max = 0, cnt = 0, res = 0;
    
    cin >> n;
    while (n--)
    {
        int hight;
        cin >> hight;
        
        if (_max < hight)
        {
            res = max(res, cnt);
            _max = hight;
            cnt = 0;
        }
        else
            cnt++;
    }
    res = max(res, cnt);
    
    cout << res;
    
    return 0;
}
