#include <iostream>

using namespace std;

int main()
{
	int arr[101] = {};
	int N, M, first, last, number;
	cin >> N >> M;
	
	for (int i = 0; i < M; i++)
	{
		cin >> first >> last >> number;
		
		first--;
		for ( ; first < last; first++)
		{
			arr[first] = number;
		}
	}
	
	for (int i = 0; i < N; i++)
		cout << arr[i] << ' ';
	
	return 0;
}
