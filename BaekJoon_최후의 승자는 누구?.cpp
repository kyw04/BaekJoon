#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> card[101];
    int score[101] = {};
    int n, m, top_score = 0;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int input;
            cin >> input;
            card[i].push(input);
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        int _max = 0;
        queue<int> max_index;
        for (int j = 0; j < n; j++)
        {
            int cur = card[j].top();
            card[j].pop();
            if (cur > _max)
            {
                while (!max_index.empty()) max_index.pop();
                _max = cur;
            }
            if(cur == _max)
                max_index.push(j);
        }
    
        while (!max_index.empty())
        {
            int idx = max_index.front();
            max_index.pop();
            
            score[idx]++;
            
            if (top_score < score[idx])
                top_score = score[idx];
        }
    }
    
    for (int i = 0; i < n; i++)
        if (top_score == score[i])
            cout << i + 1 << ' ';
    
    return 0;
}
