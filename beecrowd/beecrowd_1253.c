#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t); // Read the number of test cases

    while (t--)
    {
        char str[51];
        int shift;
        scanf("%s", str);
        scanf("%d", &shift);

        int length = strlen(str);

        for (int i = 0; i < length; i++)
        {
            char decoded_char = str[i] - shift;

            if (decoded_char < 'A')
            {
                decoded_char += 26;
            }

            printf("%c", decoded_char);
        }

        printf("\n");
    }

    return 0;
}
