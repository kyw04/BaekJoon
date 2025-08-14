#include <iostream>

using namespace std;

int main() 
{
    int n, t, c, p, res = 0;
    cin >> n >> t >> c >> p;
    
    for (int i = t + 1; i <= n; i += t)
        res += p * c;
    
    cout << res;
    
    return 0;
}
