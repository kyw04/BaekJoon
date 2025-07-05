#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Pos
{
    double x;
    double y;
};

bool isInside(Pos a, Pos b, int r)
{
    double dis = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
    return r >= dis;
}

int main()
{
    int tc;
    cin >> tc;
    
    while (tc--)
    {
        Pos s, e;
        int n, res = 0;
        cin >> s.x >> s.y >> e.x >> e.y >> n;
        for (int i = 0; i < n; i++)
        {
            double x, y, r;
            cin >> x >> y >> r;
            bool start = isInside(s, { x, y }, r);
            bool end = isInside(e, { x, y }, r);
            if ((start && end) || (!start && !end))
                continue;
            res++;
        }
        
        cout << res << '\n';
    }
    
    return 0;
}
