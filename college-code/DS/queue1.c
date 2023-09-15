#include <stdio.h>
#define size 5
struct queue
{
    int top;
    int arr[size];
};
int isEmpty(struct queue *p)
{
    if (p->top == -1)
    {
        return 1;
    }
    else
        return 0;
}
int isFull(struct queue *p)
{
    if (p->top == size - 1)
    {
        return 1;
    }
    else
        return 0;
}
void push(struct queue *p, int x)
{
    if (isFull(p))
    {
        printf("your queue is full can't push it..\n");
    }
    else
    {
        p->top++;
        p->arr[p->top] = x;
    }
}
int pop(struct queue *p)
{
    int val;
    if (isEmpty(p))
    {
        printf("your queue is empty can't pop it ...\n");
        return -1;
    }
    else
    {
        val = p->arr[0];
        for (int i = 0; i < p->top; i++)
        {
            p->arr[i] = p->arr[i + 1];
        }
        p->top--;
        return val;
    }
}
int topE(struct queue *p)
{
    return p->arr[p->top];
}
int boomE(struct queue *q)
{
    if (!isEmpty(q))
    {
        return q->arr[0];
    }
}
int peek(struct queue *p, int x)
{
    if (x > p->top || x < 0)
    {
        printf("your index is not consider..\n");
        return 0;
    }
    else
    {
        return p->arr[x-1];
    }
}
int main()
{
    struct queue p;
    p.top = -1;
    push(&p, 8);
    push(&p, 7);
    push(&p, 6);
    push(&p, 5);
    push(&p, 4);

    printf("top most element in queue :%d \n", topE(&p));
    printf("bottom most element in queue :%d \n", boomE(&p));
    printf("%d \n", peek(&p, -1));
    printf("popped element in queue:%d \n", pop(&p));
    printf("popped element in queue:%d \n", pop(&p));
    printf("popped element in queue:%d \n", pop(&p));
    printf("popped element in queue:%d \n", pop(&p));
    printf("popped element in queue:%d \n", pop(&p));
}