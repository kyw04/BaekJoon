#include <iostream>
#define LL long long

using namespace std;

LL f(LL a, LL b, int cnt)
{
    if (a > b)
        return 1e9;
    if (a == b)
        return cnt;
    
    return min(f(a * 2, b, cnt + 1), f(a * 10 + 1, b, cnt + 1));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    LL a, b;
    cin >> a >> b;
    
    int res = f(a, b, 1);
    
    if (res == 1e9)
        cout << -1;
    else
        cout << res;

    return 0;
}

/*
    1000000000000000000
*/
