#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t;
	cin >> t;
	while (t--)
	{
		unordered_set<int> note1;
		int n, m;
		
		cin >> n;
		while (n--)
		{
			int input;
			cin >> input;
			note1.insert(input);
		}
		
		cin >> m;
		while (m--)
		{
			int input;
			cin >> input;
			
			if (note1.find(input) != note1.end())
				cout << "1\n";
			else
				cout << "0\n";
		}
	}
	
	return 0;
}
