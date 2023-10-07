#include<stdio.h>
#include<stdlib.h>
struct rectangle{
    int x;
    int y;
};
int main()
{
    struct rectangle *p;
    p=(struct rectangle *)malloc(sizeof(struct rectangle));
    p->x=35;
    printf("%d",p->x);
    free(p);
}