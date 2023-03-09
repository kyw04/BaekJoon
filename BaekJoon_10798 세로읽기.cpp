#include <iostream>
#define N 5
using namespace std;

int main()
{
	string arr[N];
	
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	
	int count = 0;
	for (int i = 0; count < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[j].size() > i)
			{
				cout << arr[j][i];
			}
			else
				count++;
		}
		
		if (count == N)
			break;
		count = 0;
	}
	
	return 0;
}
