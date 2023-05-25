#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	vector<int> arr(4);
	
	for (int i = 0; i < 4; i++)
		cin >> arr[i];
	
	sort(arr.begin(), arr.end());
	
	int result = abs((arr[0] + arr[3]) - (arr[1] + arr[2]));
	
	cout << result;
	
	return 0;
}
