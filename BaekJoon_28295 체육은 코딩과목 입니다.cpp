#include <iostream>

using namespace std;

int main()
{
	char answer[4] = { 'N', 'E', 'S', 'W'};
	int n = 10, index = 0;

	while (n--)
	{
		int input;
		cin >> input;
		index = (index + input) % 4;
	}

	cout << answer[index];

	return 0;
}
