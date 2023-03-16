#include <iostream>

using namespace std;

int main()
{
	unsigned long long arr[51];
	unsigned long long n, disk, result = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cin >> disk;

	for (int i = 0; i < n; i++)
	{
		if (arr[i])
		{
			result += disk * (arr[i] / disk);

			if (arr[i] % disk != 0)
			{
				result += disk;
			}
		}
	}

	cout << result;

	return 0;
}
