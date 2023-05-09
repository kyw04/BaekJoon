#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	priority_queue<int> down; // 중간이랑 중간보다 낮은 값들 
	priority_queue<int, vector<int>, greater<int>> up; // 중간보다 높은 값들 
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;

		if (i % 2)
			up.push(input);
		else
			down.push(input);

		if (!down.empty() && !up.empty())
		{
			if (down.top() > up.top())
			{
				int temp = down.top();
				down.pop();
				down.push(up.top());
				up.pop();
				up.push(temp);
			}
		}

		cout << down.top() << '\n';
	}

	return 0;
}
