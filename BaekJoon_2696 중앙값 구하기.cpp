#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int tc;
    cin >> tc;
    while (tc--)
    {
        vector<int> result;
        priority_queue<int, vector<int>, greater<int>> left;
        priority_queue<int, vector<int>, less<int>> right;
        int mid;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            
            if (left.empty() || left.top() < input)
            {
                left.push(input);
            }
            else
            {
                right.push(input);
            }
            
            if (i % 2)
            {
                while (left.size() < right.size()) { left.push(right.top()); right.pop(); }
                while (right.size() < left.size()) { right.push(left.top()); left.pop(); }
            }
            else
            {
                mid = left.size() > right.size() ? left.top() : right.top();
                result.push_back(mid);
            }
        }
        
        cout << (n + 1) / 2 << '\n';
        for (auto& r : result)
            cout << r << ' ';
        cout << '\n';
    }
    
    return 0;
}
