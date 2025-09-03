#include <iostream>

using namespace std;

int main()
{
    int S, F;
    cin >> S >> F;
    
    
    if (S <= F)
        cout << "high speed rail";
    else
        cout << "flight";

    return 0;
}
