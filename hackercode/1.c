#include <stdio.h>
int max_of_four(int x, int y, int z, int m)
{
    int ans = x;
    int min = y;
    if (x < y)
        ans = y;
    min = x;
    if (z > ans)
        ans = z;
    if (z < min)
        m = min;
    if (m < ans)
        min = m;
    if (m > ans)
        ans = m;
    return ans;
}
int main()
{
    int a, b, c, d;
    printf("enter the four no.\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
