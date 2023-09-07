#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void printresult(struct node *ptr)
{
    int i = 0;
    while (ptr != NULL)
    {
        i++;
        printf("%d number is %d\n", i, ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
struct node *insertion_at_first(struct node *head)
{
    struct node *zero;
    zero = (struct node *)malloc(sizeof(struct node));
    zero->data = 6;
    zero->next = head;
    return zero;
}
struct node *after_node(struct node *head, struct node *previous, int data)
{
    struct node *zero;
    zero = (struct node *)malloc(sizeof(struct node));
    zero->data = data;
    zero->next = previous->next;
    previous->next = zero;
    return head;
}
struct node *insertionIn(struct node *head, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = 50;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
struct node *insertion_at_last(struct node *head)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = 12;
    ptr->next = NULL;
    p->next = ptr;
    return head;
}
struct node *delete_first(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct node *delete_In(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
struct node *delete_last(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;
    int i = 0;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *thired;
    struct node *fourth;
    struct node *five;
    struct node *six;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    thired = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    five = (struct node *)malloc(sizeof(struct node));
    six = (struct node *)malloc(sizeof(struct node));
    head->data = 7;
    head->next = second;
    second->data = 8;
    second->next = thired;
    thired->data = 9;
    thired->next = fourth;
    fourth->data = 10;
    fourth->next = five;
    five->data = 11;
    five->next = six;
    six->data = 12;
    six->next = NULL;
    // printf("befor insertion\n");
    // printresult(head);
    // struct node *y = insertion_at_first(head);
    // printf("after insertion_at_first\n");

    // printresult(y);
    // struct node *h = insertionIn(head, 2);
    // printf("after insertionIn\n");

    // printresult(h);
    // struct node *j = insertion_at_last(head);
    // printf("after insertion_at_last\n");

    // printresult(j);
    // struct node *u = after_node(head, second, 70);
    // printresult(u);
    printresult(delete_last(head));
}