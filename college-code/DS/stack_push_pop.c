#include <stdio.h>
#include <stdlib.h>
#define size 100
struct stack
{
    int arr[size];
    int top;
};
int initialis(struct stack *q)
{
    q->top = -1;
}
int empty(struct stack *q)
{
    if (q->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int full(struct stack *q)
{
    if (q->top == size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int pop(struct stack *q)
{
    if (empty(q))
    {
        printf("your stack is empty\n");
        return -1;
    }
    else
    {
        int x = q->arr[(q->top)];
        q->top--;
        return x;
    }
}
void push(struct stack *q, int x)
{
    if (full(q))
    {
        printf("stack is full can't push further \n");
    }
    else
    {
        q->top++;
        q->arr[q->top] = x;
    }
}
int main()
{
    struct stack q;
    initialis(&q);
    printf("before push:\n");
    printf("empty: %d\n", empty(&q));
    printf("full: %d\n", full(&q));
    push(&q, 69);
    push(&q, 30);
    // push(&q, 40);
    // push(&q, 60);
    // push(&q, 10);
    // push(&q, 10);
    // push(&q, 10);
    // printf("after pushing :\n");
    // printf("empty: %d\n", empty(&q));
    // printf("full: %d\n", full(&q));
    // printf("%d\n", pop(&q));
    // printf("%d\n", pop(&q));
    // printf("%d\n", pop(&q));
    // printf("%d\n", pop(&q));
    // printf("%d\n", pop(&q));
    printf("%d\n", pop(&q));
    printf("%d\n", pop(&q));
}