#include <iostream>

using namespace std;

int arr[10000001];
int n, m, input;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		
		if (arr[input])
			m = input;
			
		arr[input] = 1;
	}
	
	cout << m;
	
	return 0;
}
