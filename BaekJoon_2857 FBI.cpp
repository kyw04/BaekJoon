#include <iostream>
#include <string>

using namespace std;

int main()
{
	int arr[5];
	int cnt = 0;
	for (int i = 0; i < 5; i++)
	{
		string input;
		cin >> input;
		
		if (input.find("FBI") != string::npos)
		{
			arr[cnt] = i + 1;
			cnt++;
		}
	}
	
	for (int i = 0; i < cnt; i++)
		cout << arr[i] << ' ';
	
	if (cnt == 0)
		cout << "HE GOT AWAY!";
		
	return 0;
}
