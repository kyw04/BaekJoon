#include <iostream>
#include <vector>
#include <cmath>
#define LD long double

using namespace std;

int main()
{
    vector<pair<LD, LD>> point;
    int n;
    LD result = 0.0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        point.push_back({ x, y });
    }
    point.push_back(point.front());
    
    for (int i = 0; i < n; i++)
    {
        result += point[i].first * point[i + 1].second;
        result -= point[i].second * point[i + 1].first;
    }
    result /= 2;
    
    cout << fixed;
    cout.precision(1);
    cout << abs(result);
    
    return 0;
}
