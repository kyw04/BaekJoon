#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int N, M, k;
	bool result = true;
	
	cin >> N >> M;
	
	for (int i = 0; i < M; i++)
	{
		vector<int> booksPile;
		vector<int>::iterator it;
		cin >> k;
		
		for (int j = 0; j < k; j++)
		{
			int value;
			cin >> value;
			
			booksPile.push_back(value);
		}
		
		for (it = booksPile.begin() + 1; it != booksPile.end() && result; it++)
		{
			if (*it > *(it - 1))
			{
				result = false;
			}
		}
	}
	
	if (result)
		puts("Yes");
	else
		puts("No");
		
	return 0;
}



