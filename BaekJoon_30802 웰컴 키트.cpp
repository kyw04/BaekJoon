#include <iostream>

using namespace std;

int main() 
{
    int t_cnt = 0;
    int N, T, P;
    int size[6];
    cin >> N;
    for (int i = 0; i < 6; i++)
        cin >> size[i];
    cin >> T >> P;
    
    for (int i = 0; i < 6; i++)
    {
        t_cnt += size[i] / T;
        if (size[i] % T)
            t_cnt++;
    }
    
    cout << t_cnt << endl;
    cout << N / P << ' ' << N % P;
    
    return 0;
}
