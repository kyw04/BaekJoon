#include <iostream>
using namespace std;

int sit[101];
int main()
{
	int n, cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		if (!sit[input])
			sit[input] = 1;
		else
			cnt++;
	}
	cout << cnt;
	return 0;
}
