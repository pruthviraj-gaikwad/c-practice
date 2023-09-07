#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define size 100
struct stack
{
    int top;
    char arr[size];
};
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
        printf("can't pop it your stack is empty..");
    else
        return q->arr[q->top--];
}
void push(struct stack *q, char ch)
{
    if (isFull(q))
        printf("your stack is full..");
    else
    {
        q->top++;
        q->arr[q->top] = ch;
    }
}
int precedence(char op)
{
    if (op == '*' || op == '/')
        return 2;
    else if (op == '+' || op == '-')
        return 1;
    else
        return 0;
}
void infix_postfix(char *infix)
{
    struct stack p;
    p.top = -1;
    int l = strlen(infix);
    for (int i = 0; i < l; i++)
    {
        char ch = infix[i];
        if (isalnum(ch))
        {
            printf("%c", ch);
        }
        else if (ch == '(')
        {
            push(&p, ch);
        }
        else if (ch == ')')
        {
            while (!isEmpty(&p) && p.arr[p.top] != '(')
            {
                printf("%c", pop(&p));
            }
            pop(&p);
        }
        else if (ch == ' ')
        {
            continue;
        }
        else
        {
            while (!isEmpty(&p) && precedence(ch) <= precedence(p.arr[p.top]))
            {
                printf("%c", pop(&p));
            }
            push(&p, ch);
        }
    }
    while (!isEmpty(&p))
    {
        printf("%c", pop(&p));
    }
}
int main()
{
    char infix[size];
    printf("enter infix:");
    fgets(infix, sizeof(infix), stdin);

    printf("your postfix is:");
    infix_postfix(infix);
}
