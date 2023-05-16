#include <iostream>
#define MAX 10
using namespace std;

string no[MAX] = { "i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili" };
//string appand[] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z" };
int main()
{
	int i, j = 0;
	string result = "";
	string input;
	while (cin >> input)
	{
		j++;
		for (i = 0; i < MAX && j != 1; i++)
			if (no[i] == input) break;
		if (j == 1 || i == MAX)
			result += input[0] - 32;
			//result += appand[input[0] - 'a'];
	}
	cout << result;
	return 0;
}
