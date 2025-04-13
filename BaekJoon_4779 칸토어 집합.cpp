#include <iostream>
#include <cmath>

using namespace std;

void cantor(int n)
{
    if (n == 0)
    {
        cout << '-';
        return;
    }
    
    cantor(n - 1);
    for (int i = 0; i < pow(3, n - 1); i++)
    {
        cout << ' ';
    }
    cantor(n - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL); cin.tie(NULL);
    
    int n;
    while (cin >> n)
    {
        cantor(n);
        cout << '\n';
    }
    
    return 0;
}
