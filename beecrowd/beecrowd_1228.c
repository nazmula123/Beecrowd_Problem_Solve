#include <stdio.h>
#include <string.h>

int merge_and_count(int arr[], int temp[], int left, int mid, int right)
{
    int i, j, k;
    int inv_count = 0;

    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }

    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

int merge_sort_and_count(int arr[], int temp[], int left, int right)
{
    int mid, inv_count = 0;
    if (right > left)
    {
        mid = (right + left) / 2;

        inv_count += merge_sort_and_count(arr, temp, left, mid);
        inv_count += merge_sort_and_count(arr, temp, mid + 1, right);

        inv_count += merge_and_count(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

int count_inversions(int arr[], int n)
{
    int temp[n];
    return merge_sort_and_count(arr, temp, 0, n - 1);
}

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int start[n], finish[n], position[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &start[i]);
        }

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &finish[i]);
        }

        for (int i = 0; i < n; i++)
        {
            position[finish[i] - 1] = i;
        }

        int start_positions[n];
        for (int i = 0; i < n; i++)
        {
            start_positions[i] = position[start[i] - 1];
        }

        printf("%d\n", count_inversions(start_positions, n));
    }

    return 0;
}
