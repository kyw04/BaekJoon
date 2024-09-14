#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    while (n--)
    {
        int input;
        cin >> input;
        
        cout << input / 25 << ' ';
        input %= 25;
        cout << input / 10 << ' ';
        input %= 10;
        cout << input / 5 << ' ';
        input %= 5;
        cout << input << endl;
    }
    
    return 0;
}
