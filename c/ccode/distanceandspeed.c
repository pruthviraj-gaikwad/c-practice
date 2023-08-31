#include <stdio.h>
int main()
{
    int d, s, t;
    float r;
    printf("enter the distance between two point a and b:");
    scanf("%d", &d);
    printf("enter speed of car:");
    scanf("%d", &s);
    t = d / s;
    r=d%s;
    printf("time taken=%dhours and %.1f minute\n", t,r);
}