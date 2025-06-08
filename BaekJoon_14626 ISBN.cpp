#include <iostream>
#include <map>

using namespace std;

int main()
{
    string num;
    int sum = 0, mul;
    cin >> num;
    for (int i = 0; i < 12; i++)
    {
        if (num[i] != '*')
        {
            int n = num[i] - '0';
            sum += i % 2 ? n * 3 : n;
        }
        else
            mul = i % 2 ? 3 : 1;
    }
    
    int m = num.back() - '0';
    for (int i = 0; i < 10; i++)
    {
        int temp = sum + i * mul + m;
        if (temp % 10 == 0)
            cout << i;
    }
    
    return 0;
}
