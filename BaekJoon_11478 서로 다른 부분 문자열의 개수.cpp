#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	unordered_set<string> s;
	string input;
	char temp[1001];
	cin >> input;
	
	int n = input.length();
	
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			input.copy(temp, j - i, i);
			temp[j - i] = NULL;
			
			auto iter = s.find(temp);
			if (iter == s.end())
				s.insert(temp);
		}
	}
	
	cout << s.size();
	
	return 0;
}
