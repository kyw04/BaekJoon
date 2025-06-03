#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
  
    int tc;
    cin >> tc;
    while (tc--)
    {
        int d[2][100001] = {}, a[2][100001];
        int n;
        cin >> n;
        for (int i = 0; i <= 1; i++)
			      for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        
        d[0][0] = d[1][0] = 0;
    		d[0][1] = a[0][1];
    		d[1][1] = a[1][1];
    		for (int i = 2; i <= n; i++)
    		{
      			d[0][i] = max(d[1][i - 1], d[1][i - 2]) + a[0][i];
      			d[1][i] = max(d[0][i - 1], d[0][i - 2]) + a[1][i];
    		}
    		
        cout << max(d[1][n], d[0][n]) << '\n';
    }
    return 0;
}
