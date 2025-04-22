#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int input;
            cin >> input;
            pq.push(input);
            
            if (pq.size() > n)
                pq.pop();
        }
    }
    
    cout << pq.top();
    
    return 0;
}
