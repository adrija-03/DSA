// • WAP to create a double linked list of n nodes and display the
// linked list by using suitable user defined functions for create and
// display operations.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *first = NULL;
void create(int n)
{
    int i;
    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    printf("enter the data for nodes:");
    scanf("%d", &first->data);
    first->prev = first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &t->data);
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}
void display(struct node *p)
{
    printf("the elements are: \n");
    while (p != NULL)
    {
        printf("%d", p->data);
        p = p->next;
    }
}
int main()
{
    int n;
    printf("the nodes you want:");
    scanf("%d", &n);
    create(n);
    display(first);
    return 0;
}