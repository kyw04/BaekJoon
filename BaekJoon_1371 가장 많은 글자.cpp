#include <iostream>
#include <string>
#define MAX 26

using namespace std;

int memo[MAX];
int main()
{
	string str;
	int max = 0;

	while (getline(cin, str))
	{
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == ' ') continue;

			int index = str[i] - 'a';
			memo[index]++;
			if (max < memo[index])
				max = memo[index];
		}
	}

	for (int i = 0; i < MAX; i++)
	{
		if (max == memo[i])
		{
			char ch = i + 'a';
			cout << ch;
		}
	}

	return 0;
}
