#include <stdio.h>
#include <string.h>
#include <math.h>
int label = 250;
int label2 = 500;
int label3 = 1000;
int length(char str[])
{
    int c = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' || str[i] >= '0' && str[i] <= '9')
        {
            c++;
        }
    }
    return c;
}
int word(char str[])
{
    int c = 1;
    for (int i = 0; i < strlen(str); i++)
    {

        if (str[i] == ' ')
        {
            c++;
        }
    }
    return c;
}
int main()
{
    char str[51];
    while (fgets(str, sizeof(str), stdin) != EOF)
    {
        int size = length(str);
        int wo = word(str);
        int problem = (size / wo);
        if (problem <= 3)
        {
            printf("%d\n", label);
        }
        else if (problem == 4 || problem == 5)
        {
            printf("%d\n", label2);
        }
        else if (problem >= 6)
        {
            printf("%d\n", label3);
        }
    }

    return 0;
}