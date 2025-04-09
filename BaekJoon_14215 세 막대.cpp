#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    vector<int> num(3);

    for (auto& n : num)
        cin >> n;
    
    sort(num.begin(), num.end());
    
    if (num[0] + num[1] > num[2])
        cout << num[0] + num[1] + num[2];
    else
        cout << (num[0] + num[1]) * 2 - 1;
  
    return 0;
}
