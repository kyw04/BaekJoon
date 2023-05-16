#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int n, i, j, len;
	cin >> n;
	vector<string> student_number(n);
	vector<string> str(n, "");
	vector<string> temp(n, "");
	for (auto& a : student_number) cin >> a;
	len = student_number[0].size() - 1;

	for (i = len; i >= 0; i--)
	{
		for (j = 0; j < n; j++)
		{
			str[j] += student_number[j][i];
			temp[j] = str[j];
		}
		sort(temp.begin(), temp.end());
		for (j = 0; j < n - 1; j++)
		{
			if (temp[j] == temp[j + 1])
				break;
		}

		if (j == n - 1)
		{
			cout << str[0].length();
			break;
		}
	}

	return 0;
}
