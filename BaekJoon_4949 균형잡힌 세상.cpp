#include <iostream>
#include <stack>

using namespace std;

int main() 
{
    stack<char> s;
    string input;
    
    while (true)
    {
        getline(cin, input, '.');
        
        if (input == "\n")
            break;
        
        for (int i = 0; input[i]; i++)
        {
            if (input[i] == '(' || input[i] == '[' || input[i] == ')' || input[i] == ']')
            {
                 s.push(input[i]);
            }
            
            if (s.size() >= 2)
            {
                char a = s.top();
                s.pop();
                char b = s.top();
                s.pop();
                
                if (!(b == '(' && a == ')') && !(b == '[' && a == ']'))
                {
                    s.push(b);
                    s.push(a);
                }
            }
        }
        
        if (s.empty())
            cout << "yes\n";
        else
            cout << "no\n";
        
        while (!s.empty()) s.pop();
    }
    
    return 0;
}
