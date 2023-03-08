#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> arr;
vector<int> copy(int begin, int end)
{
	vector<int> result;
	for (int i = begin; i <= end; i++)
	{
		result.push_back(arr[i]);
	}

	return result;
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

		vector<int> arr1 = copy(0, begin - 1);
		vector<int> arr2 = copy(begin, mid - 1);
		vector<int> arr3 = copy(mid, end);
		vector<int> arr4 = copy(end + 1, arr.size() - 1);

		arr3.insert(arr3.end(), arr2.begin(), arr2.end());
		arr1.insert(arr1.end(), arr3.begin(), arr3.end());
		arr1.insert(arr1.end(), arr4.begin(), arr4.end());

		arr = arr1;
	}

	for (int i = 1; i <= N; i++)
		cout << arr[i] << ' ';

	return 0;
}
