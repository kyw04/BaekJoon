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
        priority_queue<int> left;
        priority_queue<int, vector<int>, greater<int>> right;
        int n;
        cin >> n;
        cout << (n + 1) / 2 << '\n';
        while (n--)
        {
            int input;
            cin >> input;
            
            if (n % 2)
                left.push(input);
            else
                right.push(input);
            
            if (!left.empty() && left.top() > right.top())
            {
                int a = left.top();
                int b = right.top();
                
                left.pop();
                right.pop();
                
                left.push(b);
                right.push(a);
            }
            
            if (!(n % 2))
                cout << right.top() << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}
