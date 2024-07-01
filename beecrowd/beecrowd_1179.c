#include <stdio.h>
int main()
{
    int arr[16];
    int even[16];
    int odd[16];
    int c = 0, x = 0;
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 15; i++)
    {

        if (arr[i] % 2 == 0)
        {
            even[c] = arr[i];
            c++;
        }
        else if (arr[i] % 2 != 2)
        {
            odd[x] = arr[i];
            x++;
        }
    }
    return 0;
}
