#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int button[10];
int n, m, length, result;
void f(int num, int size)
{
    if (size >= length + 1)
        return;
    
    for (int i = 0; i < 10; i++)
    {
        if (!button[i])
        {
            result = min(result, abs(num * 10 + i - n) + size + 1);
            f(num * 10 + i, size + 1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
  
    cin >> n >> m;
    while (m--)
    {
        int input;
        cin >> input;
        button[input] = 1;
    }
    
    result = abs(n - 100);
    string str_n = to_string(n);
    length = str_n.size();
    f(0, 0);
    
    cout << result;
    
    return 0;
}
