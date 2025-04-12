#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<int> line2;
    int n, number;
    cin >> n;
    
    int current = 1;
    while (n--)
    {
        cin >> number;
        if (current == number) { current++; }
        else { line2.push(number); }
        
        while (!line2.empty() && line2.top() == current)
        {
            line2.pop();
            current++;
        }
    }
    
    if (line2.empty()) { cout << "Nice"; }
    else { cout << "Sad"; }
    
    return 0;
}
