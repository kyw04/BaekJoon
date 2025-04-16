#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, int>> result;
void hanoi(int n, int start, int to, int via)
{
    if (n == 0)
        return;
    
    hanoi(n - 1, start, via, to);
    result.push_back({ start, to });
    hanoi(n - 1, via, to, start);
}

int main()
{
    int n;
    cin >> n;
    hanoi(n, 1, 3, 2);
    
    cout << result.size() << '\n';
    for (auto& a : result)
        cout << a.first << ' ' << a.second << '\n';
    
    return 0;
}
