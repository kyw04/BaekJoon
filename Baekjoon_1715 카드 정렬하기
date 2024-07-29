#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;
    int N;
    int cnt = 0;
    
    cin >> N;
    while (N--)
    {
        int input;
        cin >> input;
        pq.push(-input);
    }
    
    while (pq.size() > 1)
    {
        int num1 = pq.top();
        pq.pop();
        int num2 = pq.top();
        pq.pop();
        
        pq.push(num1 + num2);
        cnt += num1 + num2;
    }
    
    cout << -cnt;
    
    return 0;
}
