#include <iostream>
#include <vector>
#include <algorithm>
#define MIN -10001 
#define MAX 10001

using namespace std;

int main()
{
    int n;
    pair<int, int> _min = { MAX, MAX }, _max = { MIN, MIN };
    
    cin >> n;
    if (n <= 1)
    {
        cout << 0;
        return 0;
    }
    
    while (n--)
    {
        int x, y;
        cin >> x >> y;
        _min = { min(x, _min.first), min(y, _min.second) };
        _max = { max(x, _max.first), max(y, _max.second) };
    }
    
    int width = _max.first - _min.first;
    int height = _max.second - _min.second;
    
    cout << width * height;
    return 0;
}
