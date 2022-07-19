#include <iostream>
#include <vector>

using namespace std;

int n, m;
int visited[10];
vector<int> v;

void print()
{
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << ' ';
    cout << '\n';
}

void backtracking(int size)
{
    if (size == m)
    {
        print();
        return;
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0 && (v.size() == 0 || v.back() < i))
        {
            visited[i] = 1;
            v.push_back(i);
            backtracking(size + 1);
            v.pop_back();
            visited[i] = 0;
        }
    }
}

int main() 
{
    cin >> n >> m;
    
    backtracking(0);
    
    return 0;
}
