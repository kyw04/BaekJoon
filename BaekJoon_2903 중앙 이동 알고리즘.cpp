#include <iostream>
using namespace std;

int main()
{
    int n, result;
    cin >> n;
    result = (1 << n) + 1;
    
    cout << result * result;
    
    return 0;
}
