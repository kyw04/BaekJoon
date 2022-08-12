#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int compare(int a, int b)
{
	return a > b;
}

int main()
{
	vector<int> score;
	int k, n;
	cin >> k >> n;
	
	while (k--)
	{
		int input;
		cin >> input;
		score.push_back(input);
	}
	
	sort(score.begin(), score.end(), compare);
	
	cout << score[n - 1];
	
	return 0;
}
