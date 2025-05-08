#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    vector<pair<string, int>> rank;
    int n, m;
    cin >> n >> m;
    while (n--)
    {
        string str;
        int num;
        cin >> str >> num;
        if (rank.empty() || num != rank.back().second)
            rank.push_back({ str, num });
    }
    while (m--)
    {
        int input;
        cin >> input;
        
        int left = 0;
        int right = rank.size();
        int mid = (left + right) / 2;
        while (left < right)
        {
            mid = (left + right) / 2;
            if (input == rank[mid].second)
                break;
            
            if (input > rank[mid].second)
                left = mid + 1;
            else
                right = mid;
        }
        
        if (rank[mid].second < input && mid + 1 < rank.size())
            cout << rank[mid + 1].first << '\n';
        else
            cout << rank[mid].first << '\n';
    }
    
    return 0;
}
