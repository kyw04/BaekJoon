#include <iostream>

using namespace std;

int main()
{
	int n, m, j, basketL, basketR, result = 0;
	cin >> n >> m >> j;

	basketL = 1;
	basketR = m;

	for (int i = 0; i < j; i++)
	{
		int apple, cnt = 0;
		cin >> apple;

		while (true)
		{
			if (basketL <= apple && basketR >= apple)
			{
				break;
			}
			else if (basketL > apple)
			{
				basketR--;
				basketL--;
			}
			else if (basketR < apple)
			{
				basketR++;
				basketL++;
			}

			cnt++;
		}

		result += cnt;
	}

	cout << result;

	return 0;
}
