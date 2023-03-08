#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	int N, M;
	cin >> N >> M;
	
	for (int i = 0; i < N; i++)
	{
		v.push_back(i + 1);
	}
	
	for (int i = 0; i < M; i++)
	{
		int x1, x2;
		cin >> x1 >> x2;
		x1--; x2--;

		while (x1 < x2)
		{
			int temp = v[x1];
			v[x1] = v[x2];
			v[x2] = temp;
			x1++; x2--;
		}
	}
	
	for (int i = 0; i < N; i++)
	{
		cout << v[i] << ' ';
	}
	
	return 0;
}
