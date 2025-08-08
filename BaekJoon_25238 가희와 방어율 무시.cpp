#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	cout << (a * (100 - b) / 100 < 100);

    return 0;
}
