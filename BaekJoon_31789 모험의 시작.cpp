#include <iostream>
#include <vector>

using namespace std;

int main()
{
    pair<int, int> arr[101];
    int N, X, S;
    cin >> N >> X >> S;
    for (int i = 0; i < N; i++)
        cin >> arr[i].first >> arr[i].second;
    
    int max = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i].first <= X && max < arr[i].second)
            max = arr[i].second;
    }
    
    if (S < max)
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}
