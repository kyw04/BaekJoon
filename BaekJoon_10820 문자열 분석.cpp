#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	
	while (getline(cin, str))
	{
		int cnt[4] = {};
		for (int i = 0; i < str.length(); i++)
		{	
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				cnt[0]++;
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				cnt[1]++;
			}
			else if (str[i] >= '0' && str[i] <= '9')
			{
				cnt[2]++;
			}
			else if (str[i] == ' ')
			{
				cnt[3]++;
			}
		}
		printf("%d %d %d %d\n", cnt[0], cnt[1], cnt[2], cnt[3]);
	}
	
	
	
	return 0;
}
