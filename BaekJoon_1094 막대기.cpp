#include <iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    int result = 0;
    for (int i = 0; i <= 6; i++)
        if (n & (1 << i)) result++;
    
    cout << result;
    
    return 0;
}
