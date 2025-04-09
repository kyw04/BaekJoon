#include <iostream>

using namespace std;

int gcd(int p, int q) // 최대공약수
{
    return q ? gcd(q, (p % q)) : p;
}

int main() 
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int up = a * d + c * b;
    int down = b * d;
    
    int t = gcd(max(up, down), min(up, down));
    cout << up / t << ' ' << down / t << endl;
    
    return 0;
}
