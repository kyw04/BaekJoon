#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 2000000000
using namespace std;

typedef struct _rnaking
{
	int rank;
	int score;
}rnaking;

int main()
{
	int n, s, p;
	cin >> n >> s >> p;
	vector<rnaking> v(n);
	rnaking temp = { 1, MAX };
	int last = 1;
	for (auto& a : v)
		cin >> a.score;

	for (auto & a : v)
	{
		a.rank = 1;
		for (auto& b : v)
		{
			if (a.score < b.score)
				a.rank++;
		}
		if (last < a.rank)
		{
			last = a.rank;
			temp.score = a.score;
		}
	}
	for (auto & a : v)
	{
		if (a.score > s)
		{
			temp.rank++;
		}
	}

	if (s <= temp.score && n == p)
		cout << -1;
	else
		cout << temp.rank;

	return 0;
}
