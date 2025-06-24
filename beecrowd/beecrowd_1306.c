#include <stdio.h>
#include <math.h>
int main()
{
    int c = 1;
    while (1)
    {
        double a, b;
        scanf("%lf%lf", &a, &b);

        if (a == 0 && b == 0)
        {
            break;
        }
        else
        {
            int res = ceil(a / b);
            if (res - 1 > 26)
            {
                printf("Case %d: impossible\n", c);
            }
            else
            {
                printf("Case %d: %d\n", c, res - 1);
            }
        }
        c++;
    }

    return 0;
}