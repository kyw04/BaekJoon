#include <iostream>
#define MAX 1000000000
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long X, Y;
    cin >> X >> Y;

    int Z = (Y * 100) / X;
    int low = 0, high = MAX;
    int cnt = -1;
    while (low <= high && Z < 99)
    {
        int mid = (low + high) / 2;
        int t = (100 * (Y + mid)) / (X + mid);

        if (Z >= t)
        {
            cnt = mid + 1;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    cout << cnt;
    
    return 0;
}
