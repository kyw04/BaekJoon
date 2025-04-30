#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, bool> result;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        
        if (a == "ChongChong")
            result.insert({a, true});
        if (b == "ChongChong")
            result.insert({b, true});
            
        if (result[a])
            result[b] = true;
        if (result[b])
            result[a] = true;
    }
    
    int count = 0;
    for (auto r : result)
    {
        if (r.second)
            count++;
    }
    
    cout << count;
    
    return 0;
}
