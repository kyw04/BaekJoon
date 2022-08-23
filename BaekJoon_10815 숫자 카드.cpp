#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;
int n, m;

int BinarySearch(int key)
{
	int left = 0;
	int right = n;
	
	while (left < right)
	{
		int mid = (left + right) / 2;
		
		if (v[mid] == key)
			return 1;
		
		if (v[mid] < key)
			left = mid + 1;
		else
			right = mid;
	}
	
	return 0;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		v.push_back(input);
	}
	
	sort(v.begin(), v.end());
	
	cin >> m;
	while (m--)
	{
		int input;
		cin >> input;
		cout << BinarySearch(input) << ' ';
	}
	
	return 0;
}
