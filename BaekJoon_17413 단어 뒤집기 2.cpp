#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	string str, result = "";
	stack<char> s;
	getline(cin, str);

	int i = 0;
	while (i < str.length())
	{
		string temp = "";

		if (str[i] == ' ')
			i++;
		else if (str[i] == '<')
		{
			while (str[i] != '>')
				temp += str[i++];
			temp += str[i++];
		}
		else
		{
			while (str[i] != '<' && str[i] != ' ' && i < str.length())
			{
				s.push(str[i++]);
			}

			while (!s.empty())
			{
				temp += s.top();
				s.pop();
			}

			if (str[i] == ' ')
			{
				temp += " ";
				i++;
			}
		}

		result += temp;
	}

	cout << result;
	return 0;
}
