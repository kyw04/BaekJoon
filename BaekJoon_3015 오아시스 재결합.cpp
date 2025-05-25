#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    stack<pair<long long, long long>> s;
    long long n, res = 0;
    cin >> n;
    while (n--)
    {
        long long tall, cnt = 1;
        cin >> tall;
        
        while (!s.empty() && tall >= s.top().first)
        {
            res += s.top().second;
            if (tall == s.top().first)
                cnt += s.top().second;
            s.pop();
        }
        if (!s.empty())
          res++;
        
        s.push({ tall, cnt });
    }
    
    cout << res;
    
    return 0;
}
