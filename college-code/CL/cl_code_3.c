#include <stdio.h>
#define size 100
struct stack
{
    int top;
    int arr[size];
};
int isEmpty(struct stack *p)
{
    if (p->top == -1)
        return 1;
    else
        return 0;
}
int isFull(struct stack *p)
{
    if (p->top == size - 1)
        return 1;
    else
        return 0;
}
void push(struct stack *p, int x)
{
    if (isFull(p))
    {
        printf("your stack is full...\n");
    }
    else
    {
        p->top++;
        p->arr[p->top] = x;
    }
}
void display(struct stack *p)
{
    for (int i = 0; i <= p->top; i++)
    {
        printf(" %d ", p->arr[i]);
    }
}
int sort(struct stack *p)
{
    for (int i = 1; i <= p->top; i++)
    {
        int j = i;
        while (j > 0 && p->arr[j - 1] > p->arr[j])
        {
            int temp = p->arr[j];
            p->arr[j] = p->arr[j - 1];
            p->arr[j - 1] = temp;
            j--;
        }
    }
    display(p);
}
int main()
{
    struct stack p;
    p.top = -1;
    int a[size], b[size];
    int n, m;
    printf("How many element in first array:");
    scanf("%d", &n);
    printf("Enter element in first array:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        push(&p, a[i]);
    }
    printf("How many element in second array:");
    scanf("%d", &m);
    printf("Enter element in second array:");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < m; i++)
    {
        push(&p, b[i]);
    }
    sort(&p);
}