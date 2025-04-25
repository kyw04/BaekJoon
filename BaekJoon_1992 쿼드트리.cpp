#include <iostream>

using namespace std;

string arr[65];
void QuadTree(int i, int j, int n)
{
    if (n == 1)
    {
        cout << arr[i][j];
        return;
    }
    
    char color = arr[i][j];
    bool pass = true;
    for (int k = i; k < n + i; k++)
    {
        for (int l = j; l < n + j; l++)
        {
            if (color != arr[k][l])
            {
                pass = false;
                break;
            }
        }
        if (!pass) break;
    }

    if (pass)
    {
        cout << color;
    }
    else
    {
        int mid = n / 2;
        cout << "(";
        QuadTree(i, j, mid);
        QuadTree(i, j + mid, mid);
        QuadTree(i + mid, j, mid);
        QuadTree(i + mid, j + mid, mid);
        cout << ")";
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    QuadTree(0, 0, n);
    
    return 0;
}
