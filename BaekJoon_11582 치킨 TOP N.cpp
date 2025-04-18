#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> v;
vector<int> temp;
int n, key, input;
void sort(int start, int end)
{
    if (end - start > n / key)
        return;
    
    int mid = (start + end) / 2;
    int i = start;
    int j = mid + 1;
    int k = start;
    
    while (i <= mid && j <= end)
    { 
        if (v[i] <= v[j])
            temp[k++] = v[i++];
        else
            temp[k++] = v[j++];
    }
    
    int t = i > mid ? j : i;
    while (k <= end)
        temp[k++] = v[t++];
    
    for (int i = start; i <= end; i++)
        v[i] = temp[i];
}

void divide(int start, int end)
{
    if (start >= end)
        return;
    
    int mid = (start + end) / 2;
    divide(start, mid);
    divide(mid + 1, end);
    sort(start, end);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(NULL); cin.tie(NULL);
    
    cin >> n;
    temp.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    cin >> key;
    
    divide(0, n - 1);
    
    for (auto& a : temp)
        cout << a << ' ';
    
    return 0;
}
