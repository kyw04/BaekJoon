#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string str[3];
    for (int i = 0; i < 3; i++)
        cin >> str[i];
    
    int input = 0;
    for (int i = 0; i < 3; i++)
    {
        if (str[i] != "FizzBuzz" && str[i] != "Fizz" && str[i] != "Buzz")
        {
            input = stoi(str[i]) + 3 - i;
            break;
        }
    }
    
    if (input % 3 == 0 && input % 5 == 0)
        cout << "FizzBuzz";
    else if (input % 3 == 0)
        cout << "Fizz";
    else if (input % 5 == 0)
        cout << "Buzz";
    else
        cout << input;
    
    return 0;
}
