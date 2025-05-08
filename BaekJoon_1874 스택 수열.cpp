#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    stack<int> s;
    vector<int> arr;
    vector<char> result;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        arr.push_back(input);
    }
    
    int index = 0;
    for (int i = 1; i <= n; i++)
    {
        s.push(i);
        result.push_back('+');
        while (!s.empty() && s.top() == arr[index])
        {
            s.pop();
            result.push_back('-');
            index++;
        }
    }
    while (!s.empty())
    {
        if (s.top() != arr[index++])
        {
            result.clear();
            break;
        }
        s.pop();
        result.push_back('-');
    }
    
    for (auto res : result)
        cout << res << '\n';
    if (result.empty())
        cout << "NO";
    
    return 0;
}
