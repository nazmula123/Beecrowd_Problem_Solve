#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c = 1;
    while (1)
    {
        double a, b;
        cin >> a >> b;

        if (a == 0 && b == 0)
        {
            break;
        }
        else
        {
            int res = ceil(a / b);
            if (res - 1 > 26)
            {
                cout << "Case " << c << ": impossible" << endl;
            }
            else
            {
                cout << "Case " << c << ": " << res - 1 << endl;
            }
                }
        c++;
    }

    return 0;
}