#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char str[51], str2[51];
        scanf("%s %s", str, str2);

        int len1 = strlen(str);
        int len2 = strlen(str2);
        int minLen = len1 < len2 ? len1 : len2;

        for (int i = 0; i < minLen; i++)
        {
            printf("%c%c", str[i], str2[i]);
        }

        if (len1 > len2)
        {
            printf("%s", &str[minLen]);
        }
        else if (len2 > len1)
        {
            printf("%s", &str2[minLen]);
        }

        printf("\n");
    }

    return 0;
}
