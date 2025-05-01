#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

bool compare(pair<string, int>& a, pair<string, int>& b)
{
    if (a.second != b.second)
        return a.second > b.second;
    
    if (a.first.size() != b.first.size())
        return a.first.size() > b.first.size();
    
    return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    map<string, int> words;
    int n, m;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++)
    {
        string input;
        cin >> input;
        if (input.size() >= m)
        {
            words[input]++;
        }
    }
    
    
    vector<pair<string, int>> temp;
    for (auto& a : words)
        temp.push_back({ a.first, a. second });
    
    sort(temp.begin(), temp.end(), compare);
    
    for (auto& a : temp)
        cout << a.first << '\n';
    
    return 0;
}
