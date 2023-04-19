#include <iostream>
#include <cmath>
#include <stack>

using namespace std;

int B3ToO1(string &bin)
{
    int temp = 0, size = bin.size();
    for (int i = 0; i < 3; i++)
    {
        temp += (bin[size - i - 1] - '0') * pow(2, i);
        bin.pop_back();
    }

    return temp;
}

int main()
{
    string bin;
    stack<int> s;
    cin >> bin;

    while (bin.size() >= 3)
        s.push(B3ToO1(bin));

    if (bin.size())
    {
        string temp = "";
        for (int i = bin.size(); i < 3; i++)
            temp += "0";

        temp += bin;
        s.push(B3ToO1(temp));
    }

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }

}
