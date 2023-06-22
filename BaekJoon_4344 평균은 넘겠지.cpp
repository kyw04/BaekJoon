#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cout.precision(0);
	int tc;
	cin >> tc;
	
	while (tc--)
	{
		int n, integer;
		string actual;
		vector<double> scores;
		double avg, sum = 0, result = 0;
		cin >> n;
		avg = n;
		
		for (int i = 0; i < n; i++)
		{
			double input;
			cin >> input;
			scores.push_back(input);
			sum += input;
		}
		
		avg = sum / n;
		
		for (int i = 0; i < n; i++)
			if (avg < scores[i])
				result++;
		
		result = (result / n) * 100;
		integer = result;
		
		for (int i = 0; i < 4; i++)
		{
			result *= 10;
			actual.push_back(int(result) % 10 + '0');
		}
		
		if (actual[3] - '0' >= 5)
			actual[2]++;
		actual.resize(3);
		
		for (int i = 2; i >= 0; i--)
		{
			if (actual[i] - '0' >= 10)
			{
				actual[i] = '0';
				if (i == 0)
					integer++;
				else
					actual[i - 1]++;
			}
		}
		
		cout << integer << '.' << actual << "%\n";
	}
	
	return 0;
}
