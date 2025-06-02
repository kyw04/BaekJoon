#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string last;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        
        if (i && str[0] != last.back())
        {
            cout << 0;
            return 0;
        }
        last = str;
    }
    cout << 1;
    
    return 0;
}
