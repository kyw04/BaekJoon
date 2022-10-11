#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Pos
{
	int position;
	int rank;
	int index;
	
	bool operator <(Pos a)
	{
		return this->position < a.position;
	}
	
	bool operator ==(Pos a)
	{
		return this->position == a.position;
	}
};

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	vector<Pos> pos;
	vector<Pos> v;
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;
		
		pos.push_back({ input, 0, 0 });
		v.push_back({ input, 0, i });
	}
	
	sort(v.begin(), v.end());
	
	for (int i = 1; i < n; i++)
	{
		if (v[i] == v[i - 1])
			v[i].rank = v[i - 1].rank;
		else
			v[i].rank = v[i - 1].rank + 1;
		
		pos[v[i].index].rank = v[i].rank;
	}
	
	for (int i = 0; i < n; i++)
		cout << pos[i].rank << ' ';
	
	return 0;
}
