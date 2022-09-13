#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Pos
{
	int x;
	int y;
	
	bool operator < (Pos& pos) const
	{
		if (this->x == pos.x)
			return this->y < pos.y;
		
		return this->x < pos.x;
	}
};

ostream& operator << (ostream& os, const Pos& pos)
{
	os << pos.x << ' ' << pos.y;
	return os;
}

int main()
{
	vector<Pos> pos;
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		pos.push_back({ x, y });
	}
	
	sort(pos.begin(), pos.end());
	
	for (int i = 0; i < n; i++)
		cout << pos[i] << '\n';
		
	return 0;
}
