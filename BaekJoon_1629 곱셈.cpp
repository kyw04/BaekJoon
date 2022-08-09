#include <iostream>

using namespace std;

long long a, b, c;
long long pow(long long x, long long y)	
{
	if (y == 0)
		return 1;
	if (y == 1)
		return x;
	
	if (y % 2 > 0)
		return pow(x, y - 1) * x;
	long long half = pow(x, y / 2);
	half %= c;
	return (half * half) % c;
}

int main()
{
	cin >> a >> b >> c;
	
	cout << pow(a, b) % c;
	
	return 0;
}
