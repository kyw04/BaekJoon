#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL); cin.tie(NULL);
    
    deque<int> balloon;
    vector<int> papers;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        papers.push_back(input);
        balloon.push_back(i + 1);
    }
    
    
    while (!balloon.empty())
    {
        cout << balloon.front() << ' ';
        int input = papers[balloon.front() - 1];
        balloon.pop_front();
        
        while (input - 1 > 0)
        {
            input--;
            balloon.push_back(balloon.front());
            balloon.pop_front();
        }
        while (input < 0)
        {
            input++;
            balloon.push_front(balloon.back());
            balloon.pop_back();
        }
    }
    
    
    return 0;
}
