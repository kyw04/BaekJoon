#include <iostream>
#define N 31

using namespace std;

int arr[N];
int main()
{
	
	for (int i = 1; i < N; i++)
	{
		int index;
		cin >> index;
		arr[index] = 1;
	}
	
	for (int i = 1; i < N; i++)
	{
		if (!arr[i])
			cout << i << '\n';
	}
		
	return 0;
}
