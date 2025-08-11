#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        int count[26] = {};
        string str1, str2;
        int result = 0;
        getline(cin, str1);
        getline(cin, str2);
        
        for (auto& ch : str1)
            count[ch - 'a']++;
        for (auto& ch : str2)
            count[ch - 'a']--;
        
        
        for (int j = 0; j < 26; j++)
            result += abs(count[j]);
        
        cout << "Case #" << i + 1 << ": " << result << '\n';
    }
    
    return 0;
}
