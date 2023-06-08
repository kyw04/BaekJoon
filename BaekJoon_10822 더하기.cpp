#include <iostream>
#include <vector>

using namespace std;

vector<string> split(string input, char delimiter)
{
	vector<string> result;
	string temp = "";
	
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] != delimiter)
		{
			temp += input[i]; 
		}
		else
		{
			result.push_back(temp);
			temp = "";
		}
	}
	
	if (temp != "")
		result.push_back(temp);
	
	return result;
}

int main()
{
	unsigned long long sum = 0;
	string str;
	cin >> str;
	
	vector<string> numbers = split(str, ',');
	for (int i = 0; i < numbers.size(); i++)
        sum += stoi(numbers[i]);
    
    cout << sum;
    
	return 0;
}
