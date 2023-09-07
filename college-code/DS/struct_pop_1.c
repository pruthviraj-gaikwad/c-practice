#include <stdio.h>
#include <stdlib.h>
#define size 5
int top=-1;
// struct stack
// {
//     // int size;
//     int arr[size];
//     int top;
// };
// int initialis(struct stack *q)
// {
//     q->top = -1;
// }
// int empty(struct stack *q)
// {
//     if (q->top == -1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int full(struct stack *q)
// {
//     if (q->top == size - 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }
// int pop(struct stack *q)
// {
//     if (empty(q))
//     {
//         printf("your stack is empty\n");
//         return -1;
//     }
//     else
//     {
//         return q->arr[(q->top)--];
//     }
// }
// void push(struct stack *q, int x)
// {
//     if (full(q))
//     {
//         printf("stack is full can't push further \n");
//     }
//     else
//     {
//         q->top++;
//         q->arr[q->top] = x;
//     }
// }
int empty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int full()
{
    if (top == size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int pop()
{
    if (empty())
    {
        printf("your stack is empty\n");
        return -1;
    }
    else
    {
        top--;
        int val=arr[top];
        return val;
    }
}
void push(int x)
{
    if (full())
    {
        printf("stack is full can't push further \n");
    }
    else
    {
        top++;
        arr[top] = x;
    }
}
int main()
{
    printf("before push:\n");
    printf("empty: %d\n", empty());
    printf("full: %d\n", full());
    push(69);
    push(30);
    push(40);
    push(60);
    push(10);
    push(10);
    push(10);
    printf("after pushing :\n");
    printf("empty: %d\n", empty());
    printf("full: %d\n", full());
   printf("%d\n",pop());
   printf("%d\n",pop());
   printf("%d\n",pop());
   printf("%d\n",pop());
   printf("%d\n",pop());
   printf("%d\n",pop());
}