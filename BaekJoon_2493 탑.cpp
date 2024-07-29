#include <iostream>
#include <stack>
#define MAX 100000000

using namespace std;

int result[500001];
int main()
{
    stack<pair<int, int>> left, right;
    int N, input;
    cin >> N;
    
    left.push({MAX, 0});
    for (int i = 0; i < N; i++)
    {
        cin >> input;
        left.push({input, i + 1});
    }
    
    while (left.size() > 1)
    {
        int cnt = 0, index = -1;
        while (!right.empty() && left.top().first >= right.top().first) 
        {
            if (index == -1)
                index = right.top().second;
            right.pop();
            cnt++;
        }
        while (cnt--)
        {
            if (!result[index])
                result[index] = left.top().second;
            else
                cnt++;
            index++;
        }
        
        right.push(left.top());
        left.pop();
    }
     
    for (int i = 1; i <= N; i++)
    {
        cout << result[i] << ' ';
    }
    
    return 0;
}
