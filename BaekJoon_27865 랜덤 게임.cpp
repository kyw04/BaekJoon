#include <iostream>
#include <random>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, question;
	char answer;
	cin >> n;

	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(1, n);

	question = dis(gen);
	cout << "? " << question << endl;
	while (true)
	{
		cin >> answer;
		if (answer == 'Y')
		{
			cout << "! " << question << endl;
			break;
		}
		else
		{
			question = dis(gen);
			cout << "? " << question << endl;
		}
	}

	return 0;
}
