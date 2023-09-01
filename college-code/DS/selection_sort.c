#include <stdio.h>
int sort(int *arr, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        int y = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[y])
            {
                y = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[y];
        arr[y] = temp;
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
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sort(arr, n);
}