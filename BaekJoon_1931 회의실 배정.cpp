#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int compare(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first < b.first;
    else
        return a.second < b.second;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    vector<pair<int, int>> v;
    int n, result = 0;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        
        v.push_back({a, b});
    }        

    sort(v.begin(), v.end(), compare);
    
    int end = 0;
    for (auto it = v.begin(); it < v.end(); it++)
    {
        if (it->first >= end)
        {
            result++;
            end = it->second;
        }
    }
    
    cout << result;
    
    return 0;
}
