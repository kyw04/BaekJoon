#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> arr;
	int avg = 0;
	
	for (int i = 0; i < 5; i++)
	{
		int input;
		cin >> input;
		avg += input;
		arr.push_back(input);
	}
	
	avg /= 5;
	sort(arr.begin(), arr.end());
	
	cout << avg << endl;
	cout << arr[2];
	
	return 0;
}
