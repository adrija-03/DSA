// WAP to reverse the sequence elements in a double linked list.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
} *first = NULL;
void create(int n)
{
    int i;
    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    printf("the data for nodes:");
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
    printf("the elements are:\n");
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
void reverse(struct node *p)
{
    struct node *q = NULL, *r = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}
int main()
{
    int n;
    printf("enter the nodes you want: ");
    scanf("%d", &n);
    create(n);
    display(first);
    reverse(first);
    printf("\n\n ----AFTER REVERSING-----\n\n");
    display(first);
    return 0;
}