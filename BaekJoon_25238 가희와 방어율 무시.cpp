#include <iostream>

using namespace std;

int main()
{
	float a, b;
	cin >> a >> b;
	b *= 0.01;
	cout << (a - (a * b) < 100);

	return 0;
}
