#include <iostream>
#include <vector>
#include <set>

using namespace std;

set<vector<int>> res;
vector<int> temp;
int arr[10001];
int visited[10001];
int n, m;
void f()
{
    if (temp.size() >= m)
    {
        res.insert(temp);
        return;
    }
    
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            visited[i] = 1;
            temp.push_back(arr[i]);
            f();
            temp.pop_back();
            visited[i] = 0;
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
  
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    f();
    
    for (auto r : res)
    {
        for (auto n : r)
            cout << n << ' ';
        cout << '\n';
    }
    
    return 0;
}
