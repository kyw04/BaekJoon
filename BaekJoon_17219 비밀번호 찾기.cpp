#include <iostream>
#include <map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	map<string, string> _map; 
	int n, m;
	cin >> n >> m;
	
	while (n--)
	{
		string id, password;
		cin >> id >> password;
		_map.insert({ id, password });
	}
	
	while (m--)
	{
		string id;
		cin >> id;
		
		cout << _map[id] << '\n';
	}
	
	return 0;
}
