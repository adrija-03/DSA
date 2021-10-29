// • WAP to create a single circular double linked list of n nodes and
// display the linked list by using suitable user defined functions for
// create and display operations.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head;
void create(int n)
{
    int i;
    struct node *t, *last;
    head = (struct node *)malloc(sizeof(struct node));
    printf("enter the data for node: ");
    scanf("%d", &head->data);
    head->next = head;
    last = head;
    for (i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &t->data);
        t->next = last->next;
        last->next = t;
        last = t;
    }
}
void display(struct node *p)
{
    do
    {
        printf("%d ", p->data);
        p = p->next;
    } while (p != head);
}
int main()
{
    int n;
    printf("the nodes you want:");
    scanf("%d", &n);
    create(n);
    printf("\nthe elements are:\n\n");
    display(head);
    return 0;
}