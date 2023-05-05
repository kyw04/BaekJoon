#include <iostream>
#include <vector>
#define LL long long

using namespace std;

int main()
{
	vector<LL> arr;
	LL n, b, c, cnt = 0;
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		arr.push_back(input);
	}
	cin >> b >> c;
	
	for (int i = 0; i < n; i++)
	{
		int candidate = arr[i];
		candidate -= b;
		cnt++;
		
		if (candidate > 0)
		{
			cnt += candidate / c;
			
			if (candidate % c)
				cnt++;
		}
	}
	
	cout << cnt;
	
	return 0;
}
