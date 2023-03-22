#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> arr;
	int n1, n2, sum = 0;
	cin >> n1 >> n2;
	
	for (int i = 1; i <= n2; i++)
	{
		for (int j = 0; j < i; j++)
		{
			arr.push_back(i);
		}
	}
	
	for (int i = n1; i <= n2; i++)
	{
		sum += arr[i - 1];
	}
	
	cout << sum;
	
	return 0;
}
