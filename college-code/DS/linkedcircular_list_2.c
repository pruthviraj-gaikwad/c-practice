#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
 
void displyList(struct node *head)
{
    struct node* ptr=head;
    do
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}
  
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node *)malloc(sizeof(struct node))1o;
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 12;
    third->next = fourth;
    fourth->data = 13;
    fourth->next = head;
    displyList(head);
    free(head);
    free(second);
    free(third);
    free(fourth);
}