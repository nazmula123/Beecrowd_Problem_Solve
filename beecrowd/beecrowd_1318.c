#include <stdio.h>
swap()
{
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; ++j)
    {
        if (arr[j] <= pivot)
        {

            ++i;

            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b) != 0)
    {
        int arr[b];
        for (int i = 0; i < b; i++)
        {
            scanf("%d", &arr[i]);
        }
        quickSort(arr, 0, b);
        for (int i = 0; i < b; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}