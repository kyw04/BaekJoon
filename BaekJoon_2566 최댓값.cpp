#include <iostream>
#define MAX 10
#define n 9

using namespace std;

int main()
{
	int arr[MAX][MAX];
	int maxN = -1, x = -1, y = -1;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (maxN < arr[i][j])
			{
				maxN = arr[i][j];
				x = i + 1;
				y = j + 1;
			}
		}
	}
	
	cout << maxN << endl;
	cout << x << ' ' << y;
	
	return 0;
}
