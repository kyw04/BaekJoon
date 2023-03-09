#include <iostream>
#define MAX 101
using namespace std;

void input(int arr[MAX][MAX], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
}

void add(int arr1[MAX][MAX], int arr2[MAX][MAX], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr1[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
}

int main()
{
	int arr1[MAX][MAX], arr2[MAX][MAX];
	int N, M;
	cin >> N >> M;
	
	input(arr1, N, M);
	input(arr2, N, M);
	
	add(arr1, arr2, N, M);
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << arr1[i][j] << ' ';
		}
		cout << '\n';
	}
	
	return 0;
}
