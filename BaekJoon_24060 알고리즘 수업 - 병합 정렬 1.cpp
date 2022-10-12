#include <iostream>
#define MAX 500001

using namespace std;

int sorted[MAX];
int arr[MAX];
int n, key, cnt, result = -1;

void merge(int* list, int left, int mid, int right)
{
	int i = left;
	int j = mid + 1;
	int k = left;
	
	while (i <= mid && j <= right)
	{
		if (list[i] <= list[j])
			sorted[k++] = list[i++];
		else 
			sorted[k++] = list[j++];
	}
	
	if (i > mid)
	{
		for (int l = j; l <= right; l++)
			sorted[k++] = list[l];
	}
	else
	{
		for (int l = i; l <= mid; l++)
			sorted[k++] = list[l];
	}
	
	for (int l = left; l <= right; l++)
	{
		list[l] = sorted[l];
		cnt++;
		
		if (cnt == key)
			result = sorted[l];
	}
}

void merge_sort(int* list, int left, int right)
{
	if (left < right)
	{
		int mid = (left + right) / 2;
		merge_sort(list, left, mid);
		merge_sort(list, mid + 1, right);
		merge(list, left, mid, right);
	}
}

int main()
{
	cin >> n >> key;
	
	for (int i = 0; i < n; i++)
		cin >> arr[i];
		
	merge_sort(arr, 0, n - 1);
	
	cout << result;
	
	return 0;
}
