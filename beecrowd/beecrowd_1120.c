#include <stdio.h>
#include <string.h>
int main()
{
    char ch;
    char str[101];
    while (1)
    {

        scanf("%c%s", &ch, &str);
        if (ch == '0' && str == "0")
        {
            break;
        }
        else
        {
            for (int i = 0; i < strlen(str); i++)
            {
                if (str[i] != ch)
                {
                    printf("%c", ch);
                    printf("%c\n", str[i]);
                }
            }
            ch ='';
        }
    }
}