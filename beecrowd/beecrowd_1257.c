#include <stdio.h>
#include <string.h>
int counter(char str[], int c)
{
    int s = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        s += (str[i] - 65) + i + c;
    }
    return s;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        int line_counter = 0, sum = 0;
        while (x--)
        {
            char str[27];
            scanf("%s", &str);
            sum += counter(str, line_counter);
            line_counter++;
        }
        printf("%d\n", sum);
    }

    return 0;
}