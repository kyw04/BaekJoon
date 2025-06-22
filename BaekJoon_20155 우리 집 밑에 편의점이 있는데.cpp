#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[1001] = {};
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        int brand;
        cin >> brand;
        arr[brand]++;
    }
    
    int max = 0;
    for (int i = 1; i <= M; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    
    cout << max;
    
    
    return 0;
}
