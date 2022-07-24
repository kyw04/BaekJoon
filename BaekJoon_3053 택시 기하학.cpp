#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const double pi = M_PI;
	double n;
	cin >> n;
	
	printf("%.6lf\n", n * n * pi);
	printf("%.6lf\n", n * n * 2);
	
	return 0;
}
