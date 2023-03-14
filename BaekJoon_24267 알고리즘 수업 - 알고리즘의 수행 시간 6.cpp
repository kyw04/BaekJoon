#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	unsigned long long n;
	cin >> n;
	
	n = ((n - 2) * (n - 1) * n) / 6;
	
	cout << n << '\n';
	cout << 3;
	
	return 0;
}
