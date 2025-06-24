#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    getchar();
    while (t--)
    {
        char str[101], str2[101];
        gets(str);
        int mid = strlen(str) / 2;
        int k = 0;
        for (int i = mid - 1; i >= 0; i--)
        {
            str2[k] = str[i];
            k++;
        }
        k = mid;
        for (int i = strlen(str) - 1; i >= mid; i--)
        {
            str2[k] = str[i];
            k++;
        }
        str2[strlen(str)] = '\0';
        puts(str2);
    }

    return 0;
}