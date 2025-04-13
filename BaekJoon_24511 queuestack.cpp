#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL); cin.tie(NULL);
    
    int n, m;
    vector<bool> is_stack;
    deque<int> queuestack;
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        bool input;
        cin >> input;
        is_stack.push_back(input);
    }
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        if (!is_stack[i])
            queuestack.push_front(input);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int input;
        cin >> input;
        
        queuestack.push_back(input);
        cout << queuestack.front() << ' ';
        queuestack.pop_front();
    }
    
    return 0;
}
