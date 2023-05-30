#pragma warning(disable: 4996)
#include <iostream>

using namespace std;

int main()
{
	int n, cnt = 0;
	scanf("%d\n", &n);

	while (n--)
	{
		char str[3];
		int input;
		scanf("%2s%d\n", str, &input);
		if (input <= 90)
			cnt++;
	}

	printf("%d", cnt);

	return 0;
}
