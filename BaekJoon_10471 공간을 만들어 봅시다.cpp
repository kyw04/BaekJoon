#include <iostream>
#include <set>

using namespace std;

int main() 
{
    set<int> s;
    int arr[101];
    int w, p;
    cin >> w >> p;
    for (int i = 0; i < p; i++)
        cin >> arr[i];
    
    s.insert(w);
    for (int i = 0; i < p; i++)
    {
        s.insert(arr[i]);
        s.insert(w - arr[i]);
        for (int j = i + 1; j < p; j++)
            s.insert(arr[j] - arr[i]);
    }
    
    for (auto& a : s)
        cout << a << ' ';
    
    return 0;
}
