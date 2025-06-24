#include <stdio.h>
#include <string.h>
int main()
{
    while (1)
    {
        char str[51];
        gets(str);
        int len = strlen(str);

        int k = 0;
        for (int i = 0; i < len; i++)
        {
            if (str[i] != ' ')
            {
                if (k == 0 || k % 2 == 0)
                {
                    if (str[i] >= 'A' && str[i] <= 'Z')
                    {
                        printf("%c", str[i]);
                    }
                    else
                    {
                        printf("%c", str[i] - 32);
                    }
                }
                else if (k % 2 != 0)
                {
                    if (str[i] >= 'a' && str[i] <= 'z')
                    {
                        printf("%c", str[i]);
                    }
                    else
                    {
                        printf("%c", str[i] + 32);
                    }
                }

                else
                {
                    printf("%c", str[i]);
                }
                k++;
            }
            else
            {
                printf("%c", str[i]);
            }
        }
        printf("\n");
        if (len == 1)
        {
            break;
        }
    }
    return 0;
}