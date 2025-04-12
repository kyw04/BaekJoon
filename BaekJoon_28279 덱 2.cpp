#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL); cin.tie(NULL);
    
    deque<int> dq;
    int n;
    cin >> n;
    
    while (n--)
    {
        int cmd, input;
        cin >> cmd;
        
        switch (cmd)
        {
        case 1:
            cin >> input;
            dq.push_front(input);
            break;
        case 2:
            cin >> input;
            dq.push_back(input);
            break;
        case 3:
            if (!dq.empty())
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
            else
            {
                cout << -1 << '\n';
            }
            break;
        case 4:
            if (!dq.empty())
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
            else
            {
                cout << -1 << '\n';
            }
            break;
        case 5:
            cout << dq.size() << '\n';
            break;
        case 6:
            cout << dq.empty() << '\n';
            break;
        case 7:
            if (!dq.empty())
            {
                cout << dq.front() << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
            break;
        case 8:
            if (!dq.empty())
            {
                cout << dq.back() << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
            break;
        }
    }
    
    return 0;
}
