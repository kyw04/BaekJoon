#include <iostream>

using namespace std;

int GCD(int a, int b)
{
    return b ? GCD(b, a % b) : a;
}

int main() 
{
    int a, b;
    int gcd;
    cin >> a >> b;
    
    // ���Ʈ ����
    // int temp = min(a, b);
    // for (int i = temp; i > 0; i--)
    // {
    //     if (a % i == 0 && b % i == 0)
    //     {
    //         gcd = i;
    //         break;
    //     }
    // }
    
    // ��Ŭ���� ȣ����
    // while (b)
    // {
    //     int temp = a % b;
    //     a = b;
    //     b = temp;
    // }
    // gcd = a;
    //
    gcd = GCD(a, b);
    
    cout << gcd << '\n';
    cout << a * b / gcd << '\n';
    return 0;
}
