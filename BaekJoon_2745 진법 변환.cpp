#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	string N;
	int B, result = 0;
	cin >> N >> B;

	for (int i = 0; i < N.size(); i++)
	{
		int temp = N[N.size() - i - 1];
		if ('A' <= temp && temp <= 'Z')
			temp = temp - 'A' + 10;
		else
			temp = temp - '0';

		result += temp * pow(B, i);
	}

	cout << result;

	return 0;
}
