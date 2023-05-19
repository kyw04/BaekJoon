#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> arr;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int input;
		cin >> input;

		list<int>::iterator iter = arr.end();
		while (input--) { iter--; }
		arr.insert(iter, i + 1);
	}

	while (!arr.empty())
	{
		cout << arr.front() << ' ';
		arr.pop_front();
	}

	return 0;
}
