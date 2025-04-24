#include <iostream>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    deque<char> dq;
    string input;
    string bomb;
    cin >> input >> bomb;
    
    for (auto iter = input.begin(); iter != input.end(); iter++)
    {
        dq.push_back(*iter);
        
        if (bomb.back() == *iter)
        {
            int n = dq.size();
            int m = bomb.size();
            string temp = "";
            for (int i = 0; m <= n && i < m; i++)
            {
                temp += dq.back();
                dq.pop_back();
            }
            reverse(temp.begin(), temp.end());
            
            if (temp != bomb)
            {
                for (auto i = temp.begin(); i != temp.end(); i++)
                {
                    dq.push_back(*i);
                }
            }
        }
    }
    
    if (dq.empty())
        cout << "FRULA";
    else
    {
        while (!dq.empty())
        {
            cout << dq.front();
            dq.pop_front();
        }
    }
    
    return 0;
}
