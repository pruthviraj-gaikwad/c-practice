#include <stdio.h>
void printArr(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", a[i]);
    }
}
int partition(int a[], int low, int high)
{
    int i = low + 1;
    int pivot = a[low];
    int j = high;
    int temp;
    do
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
    } while (i < j);
    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void quicksort(int a[], int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(a, low, high);
        quicksort(a, low, partitionIndex - 1);
        quicksort(a, partitionIndex + 1, high);
    }
    
}
int main()
{
    int a[] = {10, 60, 3, 5, 3, 2};
    int n = 6;
    printArr(a, n);
    quicksort(a, 0, n - 1);
    printArr(a, n);
}
