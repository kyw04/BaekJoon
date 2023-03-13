#include <iostream>

using namespace std;

int arr[100001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, k;

	while (true)
	{
		cin >> n;

		if (n == -1)
			break;

		int sum = 0;
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				sum += i;
				arr[i] = 1;
			}
		}

		if (sum == n)
		{
			cout << n << " = ";

			sum = 0;
			for (int i = 1; i < n; i++)
			{
				if (arr[i])
				{
					arr[i] = 0;
					sum += i;

					cout << i;
					if (sum == n)
						break;

					cout << " + ";
				}
			}
		}
		else
		{
			for (int i = 1; i < n; i++)
				arr[i] = 0;
			
			cout << n << " is NOT perfect.";
		}
		cout << '\n';
	}

	return 0;
}
