#include <stdio.h>
#include <string.h>
int main()
{
    char str[51];
    while (fgets(str, sizeof(str), stdin))
    {
        if (strcmp(str, "00") == 0)
        {
            break;
        }
        else
        {
            int len = strlen(str);
            int c = 0;
            for (int i = 0; i < len; i++)
            {
                if (str[i] == 'l' || str[i] == 'L')
                {
                    str[i] = '1';
                    c = 1;
                }
                else if (str[i] == 'O' || str[i] == 'o')
                {
                    str[i] = '0';
                    c = 1;
                }
                else if (str[i] == ' ' && str[i] == ',')
                {
                    continue;
                    str[i] = str[i];
                    c = 1;
                }
                else if (str[i] >= '0' && str[i] <= 9)
                {
                    str[i] = str[i];
                    c = 1;
                }
            }
            if (c = 0)
            {
                printf("error\n");
            }
            else
            {
                printf("%s\n", str);
            }
        }
    }

    return 0;
}