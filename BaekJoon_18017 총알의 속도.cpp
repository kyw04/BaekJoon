#include <iostream>

using namespace std;

int main() 
{
	double a, b;
	cin >> a >> b;
	double c = 299792458;
	
	cout.precision(20);
	cout << (a + b) / (1 + (a * b) / (c * c));

	return 0;
}
