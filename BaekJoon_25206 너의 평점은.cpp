#include <iostream>
#include <unordered_map>
#define N 20

using namespace std;

unordered_map<string, double> subjectGrade = {
{ "A+", 4.5 },
{ "A0", 4.0 },
{ "B+", 3.5 },
{ "B0", 3.0 },
{ "C+", 2.5 },
{ "C0", 2.0 },
{ "D+", 1.5 },
{ "D0", 1.0 },
{ "F", 0.0 }
};

int main()
{
	double gradeSum = 0, result = 0;
	
	for (int i = 0; i < N; i++)
	{
		string name;
		double grade;
		string rank;
		
		cin >> name >> grade >> rank;
		
		
		auto key = subjectGrade.find(rank);
		if (key != subjectGrade.end())
		{
			result += grade * key->second;
			gradeSum += grade;
		}
	}
	result /= gradeSum;
	
	cout << result;
	
	return 0;
}
