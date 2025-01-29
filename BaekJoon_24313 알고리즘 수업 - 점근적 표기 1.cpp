#include <iostream>

int main()
{
    int a1, a0, c, n0;
    std::cin >> a1 >> a0 >> c >> n0;
    bool answer = a1 * n0 + a0 <= c * n0 && a1 <= c;
    std::cout << (int)answer;
    
    return 0;
}
