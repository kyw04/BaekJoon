#include <iostream>

using namespace std;

int main()
{
	long long n, a = 0;
	cin >> n;
	n--;
	
	if (n % 2 == 1)
		a = n / 2 + 1;
	
	cout << (n + 1) * (n / 2) + a << '\n' << 2;
	return 0;
}
