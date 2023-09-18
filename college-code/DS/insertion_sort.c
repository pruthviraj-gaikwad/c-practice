#include <stdio.h>
int sort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int y = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > y)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = y;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[100];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
}
