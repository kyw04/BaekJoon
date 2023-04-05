#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

using namespace std;

int arr[10];
int number[10];
int n, m;
void f(int x, int cnt)
{
	if (cnt == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << arr[i] << ' ';
		}
		cout << '\n';

		return;
	}

	int last = 0;

	for (int i = x; i < n; i++)
	{
		if (number[i] > last)
		{
			arr[cnt] = number[i];
			last = arr[cnt];
			f(i, cnt + 1);
		}
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> number[i];

	sort(number, number + n);

	f(0, 0);

	return 0;
}
