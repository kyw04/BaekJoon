#include <iostream>
#include <algorithm>

using namespace std;

string n;

bool compare(char a, char b)
{
    return a > b;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;

    sort(n.begin(), n.end(), compare);
    
    cout << n;
         
    return 0;
}
