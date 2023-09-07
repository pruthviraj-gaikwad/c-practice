#include <stdio.h>
#include <stdlib.h>
#define size 100
struct stack
{
    int top;
    char arr[size];
};
int initialis(struct stack *q)
{
    q->top = -1;
}
int isEmpty(struct stack *q)
{
    if (q->top == -1)
        return 1;
    else
        return 0;
}
int isFull(struct stack *q)
{
    if (q->top == size - 1)
        return 1;
    else
        return 0;
}
char pop(struct stack *q)
{
    if (isEmpty(q))
    {
        printf("your stack is empty can't push it\n");
        return -1;
    }
    else
    {
        char val = q->arr[q->top];
        q->arr[q->top--];
        return val;
    }
}
void push(struct stack *q, char x)
{
    if (isFull(q))
    {
        printf("your stack is full can't push ferther..\n");
    }
    else
    {
        q->top++;
        q->arr[q->top] = x;
    }
}
int parenthesias(char *exp)
{
    struct stack *p;
    initialis(p);
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(p, '(');
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(p))
            {
                printf("your stack is empty can not pop it\n");
                return -1;
            }
            pop(p);
        }
    }
    if (isEmpty(p))
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    char *exp = "3+3((())3*2)";
    if (parenthesias(exp))
    {
        printf("parenthesias is match..");
    }
    else
    {
        printf("parenthesias not match..");
    }
}