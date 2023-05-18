#include <iostream>
#include <string>
#include <deque>
#include <cctype>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int tc;
	cin >> tc;

	while (tc--)
	{
		deque<int> d;
		string cmd, arr;
		string::iterator iter;
		int n;
		bool isfront = true, error = false;
		cin >> cmd >> n >> arr;

		string number = "";
		for (iter = arr.begin(); iter != arr.end(); iter++)
		{
			if (isdigit(*iter))
				number += *iter;
			else if (!number.empty())
			{
				d.push_back(stoi(number));
				number = "";
			}
		}

		iter = cmd.begin();
		do
		{
			if (*iter == 'R')
				isfront = !isfront;
			if (*iter == 'D')
			{
				if (d.empty())
				{
					error = true;
					break;
				}

				if (isfront)
					d.pop_front();
				else
					d.pop_back();
			}
			iter++;
		}while (iter != cmd.end());

		if (error)
			cout << "error\n";
		else
		{
			if (d.size() > 0)
			{
				cout << '[';
				if (isfront)
				{
					while (d.size() > 1) { cout << d.front() << ','; d.pop_front(); }
					cout << d.front() << "]\n";
				}
				else
				{
					while (d.size() > 1) { cout << d.back() << ','; d.pop_back(); }
					cout << d.back() << "]\n";
				}
			}
			else
				cout << "[]\n";
		}
	}

	return 0;
}
