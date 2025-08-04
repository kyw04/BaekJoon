#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n;
    string str;
    cin >> n >> str;
    int cnt = count(str.begin(), str.end(), 'O');
    n = n % 2 ? n + 1 : n;
    if (cnt >= n / 2)
        cout << "Yes";
    else
        cout << "No";
    
    return 0;
}
