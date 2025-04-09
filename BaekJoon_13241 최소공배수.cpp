#include <iostream>
#include <algorithm>
#define ULL unsigned long long

using namespace std;

ULL gcd(ULL p, ULL q) // 최소공배수
{
    return q ? gcd(q, (p % q)) : p;
}

int main() 
{
    ULL a, b;
    cin >> a >> b;
    
    cout << (a * b) / gcd(max(a, b), min(a, b));
    
    return 0;
}
