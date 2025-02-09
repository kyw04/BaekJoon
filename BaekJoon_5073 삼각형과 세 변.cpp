#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c;
    while (true)
    {
        cin >> a >> b >> c;
        if (!(a + b + c))
            break;
        
        int sum = 0, _max;
        sum = a + b + c;
        _max = max(a, max(b, c));
        
        if (_max < sum - _max)
        {
            if (a == b && b == c)
                cout << "Equilateral" << endl;
            else if (a == b || b == c || c == a)
                cout << "Isosceles" << endl;
            else
                cout << "Scalene" << endl;
        }
        else
            cout << "Invalid" << endl;
    }
    

    return 0;
}
