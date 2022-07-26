#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;
    string num;
    cin >> n;
    
	if (n == 0)
		num = "0";
	else
	{
		num = "1";
		for (int i = 1; i <= n; i++)
	    {
	    	
		}
	}
    
    while (n)
    {
        if (n % 10 == 0)
			cnt++; 
        n /= 10;
    }
    
    cout << cnt;
    
    return 0;
}
