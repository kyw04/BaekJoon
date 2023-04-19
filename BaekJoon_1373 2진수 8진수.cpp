#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string bin;
    int result = 0, n;
    cin >> bin;

  	n = bin.size() - 1;
    for (int i = 0; i < bin.size(); i++)
    {
        int temp = bin[i] - '0';
        result += temp * pow(8, n--);
    }

    cout << result;

    return 0;
}
