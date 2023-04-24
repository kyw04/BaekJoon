#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	
	n *= 100;
	
	if (n >= m)
		cout << "Yes";
	else
		cout << "No";
	
	return 0;
}
