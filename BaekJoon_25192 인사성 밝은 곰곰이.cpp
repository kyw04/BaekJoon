#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<string> s;
	int n, cnt = 0;
	cin >> n;
	
	while (n--)
	{
		string input;
		cin >> input;
		
		if (input == "ENTER")
		{
			cnt += s.size();
			s.clear();
		}
		else if (s.find(input) == s.end())
		{
			s.insert(input);
		}
	}
	
	cout << cnt + s.size();
	
	return 0;
}
