#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin >> n;
    
    const int none = 1000000;
    int total_min[3] = { none, none, none };
    int total_max[3] = { };
    
    while (n--)
    {
        int score[3];
        for (int i = 0; i < 3; i++)
            cin >> score[i];
        
        int _min[3] = { none, none, none };
        int _max[3] = {};
        for (int i = 0; i < 3; i++)
        {
            for (int j = -1; j <= 1; j++)
            {
                if (i + j >= 0 && i + j < 3)
                {
                    _min[i] = min(_min[i], total_min[i + j]);
                    _max[i] = max(_max[i], total_max[i + j]);
                }
            }
        }
        
        for (int i = 0; i < 3; i++)
        { 
            if (total_min[i] == none)
            {
                total_min[i] = score[i];
                total_max[i] = score[i];
            }
            else
            {
                total_min[i] = _min[i] + score[i];
                total_max[i] = _max[i] + score[i];
            }
        }
    }
    
    cout << max(total_max[0], max(total_max[1], total_max[2])) << ' ';
    cout << min(total_min[0], min(total_min[1], total_min[2]));
    return 0;
}
