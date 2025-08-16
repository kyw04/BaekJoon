#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b;
        string str;
        cin >> a >> b >> str;
        
        for (auto& ch : str)
            cout << (char)(((a * (ch - 'A') + b) % 26) + 'A');
        cout << '\n';
    }
    
    return 0;
}
