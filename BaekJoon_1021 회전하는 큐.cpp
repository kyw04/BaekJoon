#include <iostream>
#include <deque>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    deque<int> dq;
    int n, m, cnt = 0;
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++)
        dq.push_back(i);
    
    while (m--)
    {
        int key;
        cin >> key;
        
        if (dq.front() == key)
        {
            dq.pop_front();
        }
        else 
        {
            int temp = 0;
            while (dq.front() != key)
            {
                dq.push_back(dq.front());
                dq.pop_front();
                temp++;
            }
            int a = dq.size() - temp;
            cnt += temp < a ? temp : a;
            
            dq.pop_front();
        }
    }
    
    cout << cnt;
    
    return 0;
}
