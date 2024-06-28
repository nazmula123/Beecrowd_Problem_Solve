#include <stdio.h>
#include <string.h>
void print(int x)
{
    if (x == 1)
    {
        printf("Entao eh Natal!\n");
    }
    else if (x > 1)
    {
        char ch[] = "Entao eh Natal!";
        for (int i = 0; i < strlen(ch); i++)
        {
            printf("%c", ch[i]);
            if (ch[i] == 'a')
            {
                for (int i = 0; i < x - 1; i++)
                {
                    printf("a");
                }
            }
        }
        printf("\n");
    }
}
int main()
{
    int x;
    scanf("%d", &x);
    print(x);
    return 0;
}