#include <iostream>
#include <stack>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	stack<string> s;
	int tc;
	cin >> tc;
	cin.ignore();
	
	for (int j = 1; j <= tc; j++)
	{
		string input;
		getline(cin, input, '\n');
		
		string temp = "";
		for (int i = 0; input[i]; i++)
		{
			if (input[i] == ' ')
			{
				s.push(temp);
				temp = "";
			}
			else if (input[i + 1] == NULL)
			{
				temp += input[i];
				s.push(temp);
				temp = "";
			}
			else
			{
				temp += input[i];
			}
		}
	
		cout << "Case #"<< j << ":";	
		while (!s.empty())
		{
			cout << ' ' << s.top();
			s.pop();
		}
		cout << '\n';
	}
	
	return 0;
}
