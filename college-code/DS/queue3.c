#include <stdio.h>

#define size 3

struct queue
{
    int f;
    int r;
    int arr[size];
};

int isFull(struct queue *p)
{
    if ((p->r + 1) % size == p->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct queue *p)
{
    if (p->r == p->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *p, int val)
{
    if (isFull(p))
    {
        printf("your queue is full...\n");
    }
    else
    {
        p->r = ((p->r + 1) % size);
        p->arr[p->r] = val;
        printf("enqueue element is %d\n", val);
    }
}

int dequeue(struct queue *p)
{
    int a;
    if (isEmpty(p))
    {
        printf("your queue is empty...\n");
        return -1;
    }
    else
    {
        p->f = ((p->f + 1) % size);
        a = p->arr[p->f];
    }
    return a;
}

int main()
{
    struct queue p;
    p.r = 0;
    p.f = 0;
    enqueue(&p, 39);
    enqueue(&p, 40);
    printf("%d\n", dequeue(&p));
    printf("%d\n", dequeue(&p));
    enqueue(&p, 39);
    enqueue(&p, 40);
}