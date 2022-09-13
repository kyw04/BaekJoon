#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		vector<int> scores;
		int m, max_distance = 0;
		cin >> m;
		
		for (int j = 0; j < m; j++)
		{
			int score;
			cin >> score;
			scores.push_back(score);
		}
		
		sort(scores.begin(), scores.end());
		
		for (int j = 0; j < m - 1; j++)
		{
			max_distance = max(scores[j + 1] - scores[j], max_distance);
		}
		
		printf("Class %d\n", i + 1);
		printf("Max %d, Min %d, Largest gap %d\n", scores[m - 1], scores[0], max_distance);
	}
	
	return 0;
}
