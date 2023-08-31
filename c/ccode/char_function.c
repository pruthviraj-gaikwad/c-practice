#include <stdio.h>
char toLower(char latter)
{
    if (latter >= 'A' && latter <= 'Z')
    {
        return latter - 'A' + 'a';
    }
    else
    return -1;
}
char toUpper(char latter)
{
    if (latter >= 'a' && latter <= 'z')
    {
        return latter - 'a' + 'A';
    }
    else
    return -1;
}
int main()
{
    char a;
    printf("enter latter:");
    scanf("%c", &a);
    int y = toLower(a);
    printf("%c", y);
    int u=toUpper(a);
    printf("%c",u);
}