#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> arr;
	int n;
	cin >> n;
	
	while (n--)
	{
		int input;
		cin >> input;
		arr.push_back(input);
	}
	
	sort(arr.begin(), arr.end());
	
	cout << arr[arr.size() - 1] - arr[0];
	
	return 0;
}
