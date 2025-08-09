#include <iostream>

using namespace std;

int main()
{
    string result;
    
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            char input;
            cin >> input;
            if (input  == 'w')
                result = "chunbae";
            if (input == 'b')
                result = "nabi";
            if (input == 'g')
                result = "yeongcheol";
        }
    }
    
    cout << result;
    
    return 0;
}
