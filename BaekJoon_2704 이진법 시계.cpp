#include <iostream>
#include <string>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    while (n--)
    {
        string str;
        cin >> str;
        
        int hour = (str[0] - '0') * 10 + str[1] - '0';
        int minute = (str[3] - '0') * 10 + str[4] - '0';
        int second = (str[6] - '0') * 10 + str[7] - '0';
        
        string hour_binary;
        string minute_binary;
        string second_binary;
        for (int i = 5; i >= 0; i--)
        {
            int bit = 1 << i;
            hour_binary.push_back(bool(hour & bit) + '0');
            minute_binary.push_back(bool(minute & bit) + '0');
            second_binary.push_back(bool(second & bit) + '0');
            
            cout << hour_binary.back() << minute_binary.back() << second_binary.back();
        }
        cout << ' ' << hour_binary << minute_binary << second_binary << '\n';
    }
    
    return 0;
}
