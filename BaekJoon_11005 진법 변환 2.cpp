#include <iostream>
using namespace std;

void FormetChange(int value, int formet)
{
    if (value == 0)
        return;
    
    FormetChange(value / formet, formet);
    
    int result = value % formet;
    if (result >= 10)
        cout << char('A' + result - 10);
    else 
        cout << result;
}

int main()
{
    int n, b;
    cin >> n >> b;
    
    FormetChange(n, b);
    
    return 0;
}
