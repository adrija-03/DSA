// WAP to remove the duplicates in a unsorted double linked list.
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
    printf("enter the data for nodes:\n");
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
        printf("%d ", p->data);
        p = p->next;
    }
}
void removeduplicates(struct node *p)
{
    struct node *q = p->next;
    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = p->next;
        }
        else
        {
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }
}
int main()
{
    int n;
    printf("the nodes you want:");
    scanf("%d", &n);
    create(n);
    display(first);
    removeduplicates(first);
    printf("\n\n------ after removing-------\n\n");
    display(first);
    return 0;
}