#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    queue<int> q;

    cin >> n;

    for (int i = 0; i < n; i++)
        q.push(i + 1);

    while (q.size() > 1)
    {
        q.pop();

        if (q.size() == 1)
        {
            cout << q.front();
            q.pop();
            break;
        }

        q.push(q.front());
        q.pop();
    }

    if (q.size())
        cout << q.front();

    return 0;
}
