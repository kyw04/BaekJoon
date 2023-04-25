#include <iostream>
#define M 1234567891


using namespace std;

int main()
{
	string str;
	int n;
	long long r = 1, hash = 0;

	cin >> n >> str;

	for (int i = 0; i < n; i++)
	{
		hash = (hash + (str[i] - 'a' + 1) * r) % M;

		r = (r * 31) % M;
	}

	cout << hash;

	return 0;
}
