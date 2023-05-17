#include <iostream>
#include <list>

using namespace std;

int main()
{
	int n;
	string str;
	list<char> word;
	list<char>::iterator cursorX;
	
	cin >> str;	
	for (auto &s : str)
		word.push_back(s);
	cursorX = word.end();
	cin >> n;
	
	while (n--)
	{
		char cmd;
		cin >> cmd;
		
		switch(cmd)
		{
			case 'L':
				if (cursorX != word.begin())
					cursorX--;
				break;
				
			case 'D':
				if (cursorX != word.end())
					cursorX++;
				break;
				
			case 'B':
				if (cursorX != word.begin())
				{
					list<char>::iterator erase_iter = cursorX;
					erase_iter--;
					word.erase(erase_iter);
				}
				break;
				
			case 'P':
				char ch;
				cin >> ch;
				
				word.insert(cursorX, ch);
				break;
		}
	}
	
	for (list<char>::iterator iter = word.begin(); iter != word.end(); iter++)
		cout << *iter;
	
	return 0;
}
