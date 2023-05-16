#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string swap(string n)
{
	int len = n.length();
	for (int i = 0; i < len / 2; i++)
	{
		char t = n[i];
		n[i] = n[len - i - 1];
		n[len - i - 1] = t;
	}
	return n;
}
string add(string n1, string n2)
{
	string result = "";
	string* n;
	int len1 = n1.length(), len2 = n2.length();
	int min, max;
	if (len1 > len2)
	{
		n = &n2;
		min = len2;
		max = len1;
	}
	else
	{
		n = &n1;
		min = len1;
		max = len2;
	}
	n1 = swap(n1);
	n2 = swap(n2);
	for (int i = min; i < max; i++)
		n->push_back('0');

	int upper = 0;
	for (int i = 0; i < max; i++)
	{
		int number = n1[i] - '0' + n2[i] - '0' + upper;
		upper = 0;
		switch (number)
		{
		case 0:
			result.push_back('0');
			break;
		case 1:
			result.push_back('1');
			break;
		case 2:
			result.push_back('0');
			upper = 1;
			break;
		case 3:
			result.push_back('1');
			upper = 1;
			break;
		}
	}
	if (upper)
		result.push_back('1');

	for (int i = result.length(); i > 0 && result[i - 1] != '1'; i--)
		result.pop_back();
	result = swap(result);

	if (result[0] == NULL)
		result.push_back('0');

	return result;
}
int main()
{
	string n1, n2;
	cin >> n1 >> n2;
	cout << add(n1, n2);
	return 0;
}
