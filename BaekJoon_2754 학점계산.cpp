#include <iostream>
#include <map>

using namespace std;

map<string, float> m = { 
{ "A+", 4.3 }, { "A0", 4.0 }, { "A-", 3.7 },
{ "B+", 3.3	}, { "B0", 3.0 }, { "B-", 2.7 },
{ "C+", 2.3	}, { "C0", 2.0 }, { "C-", 1.7 },	
{ "D+", 1.3 }, { "D0", 1.0 }, { "D-", 0.7 },
{ "F" , 0.0 } };
	
int main()
{
	string str;
	cin >> str;
	
	map<string, float>::iterator iter = m.find(str);
	printf("%.1f", iter->second);
	
	
	return 0;
}
