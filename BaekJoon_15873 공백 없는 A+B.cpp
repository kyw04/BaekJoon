#pragma warning(disable : 4996)
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b;
	int n;

	scanf("%d", &n);
	a = n / 10;
	b = n % 100;

	if (a > 10)
		a /= 10;
	if (b > 10)
		b %= 10;
	
	cout << a + b;
	return 0;
}

/*
1  1
1  10
10 1
10 10
*/
