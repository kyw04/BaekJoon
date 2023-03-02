#include <iostream>

using namespace std;

int main()
{
	int arr[102];
	int N, M;
	cin >> N >> M;
	
	for (int i = 0; i < N; i++)
		arr[i] = i + 1;
	
	for (int i = 0; i < M; i++)
	{
		int j, k;
		cin >> j >> k;
		swap(arr[j - 1], arr[k - 1]);
	}
	
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << ' ';
	}
		
	return 0;
}
