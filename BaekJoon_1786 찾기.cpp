#include <iostream>
#include <string>
#include <vector>
#define MAX 1000001

using namespace std;

int pi[MAX];
void SetPi(string& str)
{
    for (int i = 1, j = 0; i < str.size(); i++)
    {
        while (j > 0 && str[i] != str[j]) j = pi[j - 1];
        
        if (str[i] == str[j])
            pi[i] = ++j;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    vector<int> res;
    string T, P;
    getline(cin, T);
    getline(cin, P);
    
    SetPi(P);
    
    int n = T.size();
    int m = P.size();
    for (int i = 0, j = 0; i < n; i++)
    {
        while (j > 0 && T[i] != P[j])
            j = pi[j - 1];
        
        if (T[i] == P[j])
        {
            if (j == m - 1)
            {
                res.push_back(i - m + 1);
                j = pi[j];
            }
            else
                j++;
        }
    }
    
    cout << res.size() << '\n';
    for (auto r : res)
        cout << r + 1 << ' ';
    
    return 0;
}
