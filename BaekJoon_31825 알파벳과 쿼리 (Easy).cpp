#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n, q;
    string str;
    cin >> n >> q >> str;
    
    for (int i = 0; i < q; i++)
    {
        int cmd, l, r;
        cin >> cmd >> l >> r;
        
        char last = 0;
        int cnt = 0;
        for (int i = l - 1; i < r; i++)
        {
            if (cmd == 1 && last != str[i])
            {
                cnt++;
                last = str[i];
            }
            
            if (cmd == 2)
            {
                char temp = (str[i] - 'A' + 1) % 26;
                str[i] = temp + 'A';
            }
        }
        if (cmd == 1)
            cout << cnt << endl;
    }
    
    return 0;
}
