#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, res = 0;
    
    cin >> n;
    while (n--)
    {
        int c, k;
        cin >> c >> k;
        
        res += c * k * pow(1, k - 1);
    }
    
    cout << res;
    
    return 0;
}
