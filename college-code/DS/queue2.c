#include <stdio.h>
#define size 100

struct queue
{
    int r;
    int f;
    int arr[size];
};

int isFull(struct queue *p)
{
    if (p->r == size - 1)
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
    if (p->f == p->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *p, int x)
{
    if (isFull(p))
    {
        printf("your queue is overflow..\n");
    }
    else
    {
        p->r++;
        p->arr[p->r] = x;
        printf("%d\n", x);
    }
}

int dequeue(struct queue *p)
{
    if (isEmpty(p))
    {
        printf("your queue is empty...\n");
        return -1;
    }
    else
    {
        p->f++;
        int a = p->arr[p->f];
        return a;
    }
}

int main()
{
    struct queue p;
    p.r = -1;
    p.f = -1;
    enqueue(&p, 50);
    enqueue(&p, 60);
    enqueue(&p, 50);
    enqueue(&p, 20);
    enqueue(&p, 80);
    printf("after dequeue element :\n");
    printf("%d\n",dequeue(&p));
    printf("%d\n",dequeue(&p));
    printf("%d\n",dequeue(&p));
    printf("%d\n",dequeue(&p));
    printf("%d\n",dequeue(&p));
}