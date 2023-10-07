#include <stdio.h>
int main()
{
    int num = 42;
    int *ptr;
    ptr = &num;
    // int *ptr=&num;
    printf("dereferenced value:%d\n", *ptr);

    int arr[5] = {1, 2, 3, 4, 5};
    int *intptr = arr;
    intptr++;
    printf("incremented value:%d\n", *intptr);

    intptr--;
    printf("decremented value :%d\n", *intptr);

    char str[] = "Hello";
    char *charptr = str;
    charptr++;
    printf("incremented character:%c\n", *charptr);

    int array[3] = {10, 20, 30};
    int *arrayptr = array;
    for (int i = 0; i < 3; i++)
    {
        printf("array element %d:%d\n", i + 1, *arrayptr);
        *arrayptr++;
    }

    int value = 100;
    printf("before function call:%d\n", value);

    void modifyValue(int *ptr)
    {
        *ptr = 200;
    }

    modifyValue(&value);
    printf("after function call:%d\n", value);
}