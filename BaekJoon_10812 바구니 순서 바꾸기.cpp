#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr;
void swap(int begin, int mid, int end)
{
	vector<int> result;
	for (int i = mid; i <= end; i++)
	{
		result.push_back(arr[i]);
	}
	for (int i = begin; i < mid; i++)
	{
		result.push_back(arr[i]);
	}
	for (int i = 0; i < result.size(); i++)
	{
		arr[begin + i] = result[i];
	}
}

int main()
{
	int N, M;
	cin >> N >> M;

	for (int i = 0; i <= N; i++)
	{
		arr.push_back(i);
	}

	for (int i = 0; i < M; i++)
	{
		int begin, mid, end;
		cin >> begin >> end >> mid;

		swap(begin, mid, end);
	}

	for (int i = 1; i <= N; i++)
		cout << arr[i] << ' ';

	return 0;
}
