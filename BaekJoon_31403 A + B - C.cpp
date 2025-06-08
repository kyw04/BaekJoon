#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << a + b - c << endl;
    string str = to_string(a) + to_string(b);
    cout << stoi(str) - c;
    
    return 0;
}
