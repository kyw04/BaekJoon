#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    queue<int> q;
    int n, k;
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++)
        q.push(i);
    
    cout << '<';
    for (int i = 1; q.size() > 1; i++)
    {
        if (i % k == 0)
        {
            cout << q.front() << ", ";
        }
        else
        {
            q.push(q.front());
        }
        q.pop();
    }
    
   cout << q.front() << '>';
    
    return 0;
}
