#include <stdio.h>
#include <string.h>
#define size 100

void charAtPos(char a[], int l, char ch)
{
    for (int i = 0; i < l; i++)
    {
        if (a[i] == ch)
        {
            printf("%c at positiion %d\n", ch, i + 1);
        }
    }
}

void positionAtCh(char a[], int l, int index)
{
    for (int i = 0; i < l; i++)
    {
        if (i == index)
        {
            printf("at position %d character is %c\n", index, a[i]);
        }
    }
}

int main()
{
    char a[size] = "sggs";
    int l = strlen(a);
    charAtPos(a, l, 's');
    charAtPos(a, l, 'g');
    
    positionAtCh(a, l, 2);
}
