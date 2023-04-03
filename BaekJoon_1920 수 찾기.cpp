#include <iostream>
#include <algorithm>
#define MAX 100000
#define LL long long
using namespace std;

LL arr[MAX];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;

	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cin >> m;

	sort(arr, arr + n);

	for (int i = 0; i < m; i++)
	{
		LL input;
		int left, right, mid;
		cin >> input;

		left = 0;
		right = n - 1;
		mid = right / 2;

		while (left <= right)
		{
			if (arr[mid] == input)
			{
				cout << 1 << '\n';
				break;
			}
			else if (arr[mid] < input)
				left = mid + 1;
			else
				right = mid - 1;
			mid = (left + right) / 2;
		}
		if (arr[mid] != input)
			cout << 0 << '\n';
	}

	return 0;
}
