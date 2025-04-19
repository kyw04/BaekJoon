#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;
vector<vector<unsigned>> arr;
unsigned special_award(int n, int x, int y)
{
    if (n == 1)
        return arr[x][y];
    
    int half = n / 2;
    vector<unsigned> temp;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            temp.push_back(special_award(half, half * i + x, half * j + y));
        }
    }
    
    sort(temp.begin(), temp.end());
    return temp[1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> N;
    
    arr.resize(N);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            unsigned input;
            cin >> input;
            arr[i].push_back(input);
        }
    }
    
    cout << special_award(N, 0, 0);
    
    return 0;
}
