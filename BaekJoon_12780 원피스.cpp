#include <iostream>
#include <string>

using namespace std;

int main()
{
    int res = 0;
    string n, m;
    cin >> n >> m;
    
    size_t f;
    do
    {
        f = n.find(m);
        if (f != string::npos)
        {
            n[f] = ' ';
            res++;
        }
    } while (f != string::npos);
    
    cout << res;
    
    return 0;
}
