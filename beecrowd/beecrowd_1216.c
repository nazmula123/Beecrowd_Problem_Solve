#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    int des, c = 0, sum = 0;
    double ave = 0.0;
    while (scanf("%s", &str) != EOF)
    {
        if (scanf("%d", &des) != EOF)
        {
            sum = sum + des;
            c++;
        }
    }
    ave = sum / c;
    printf("%.1lf\n", ave);
    return 0;
}