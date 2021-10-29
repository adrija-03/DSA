// • Write a menu driven program to perform the following operations
// in a double linked list by using suitable user defined functions for
// each case.
// a) Traverse the list forward,
// b) Traverse the list backward,
// c) Check if the list is empty
// d) Insert a node at the certain position (at beginning/end/any
// position)
// e) Delete a node at the certain position (at beginning/end/any
// position)
// f) Delete a node for the given key, g) Count the total number of
// nodes,
// h) Search for an element in the linked list
// Verify & validate each function from main method
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
int length(struct node *p)
{
    int count = 0;
    while ((p != NULL))
    {
        count++;
        p = p->next;
    }
    return count;
}
void insert(struct node *p)
{
    int index, i;
    struct node *t;
    printf("\nenter the index where you want to insert: ");
    scanf("%d", &index);
    if (index < 0 || index > length(p))
        return;
    if (index == 0)
    {
        t = (struct node *)malloc(sizeof(struct node));
        printf("\nenter the data you want to insert:");
        scanf("%d", &t->data);
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        t = (struct node *)malloc(sizeof(struct node));
        printf("\nenter the data you want to insert:");
        scanf("%d", &t->data);
        t->prev = p;
        t->next = p->next;
        if (p->next)
            p->next->prev = t;
        p->next = t;
    }
}
int delete (struct node *p)
{
    struct node *q;
    int x = -1, i, index;
    printf("\nenter the index where you want to delete: ");
    scanf("%d", &index);
    if (index < 0 || index > length(p))
        return -1;
    if (index == 1)
    {
        first = first->next;
        if (first)
            first->prev = NULL;
        x = first->data;
        free(p);
    }
    else
    {
        for (i = 0; i < index - 1; i++)

            p = p->next;
        p->prev->next = p->next;
        if (p->next)
            p->next->prev = p->prev;
        x = p->data;
        free(p);
    }
    return x;
}
int search(int key)
{
    int index = 0;
    struct node *p;

    p = first;
    while (p != NULL && p->data != key)
    {
        index++;
        p = p->next;
    }
    return (p != NULL) ? index : -1;
}
void transverseback(struct node *p)
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
    int n, keytosearch, index, ch;
    printf("the nodes you want:");
    scanf("%d", &n);
    create(n);

    while (1)
    {
        printf("\npress 1:-Traversal of the list.\n");
        printf("\npress 2:-Check if the list is empty.\n");
        printf("press 3:-Insert a node at the certain position (at beginning/end/any position)\n");
        printf("press 4:-Delete a node for the given position(at beginning/end/any position)\n");
        printf("press 5:-transverse back\n");
        printf("press 6:-Search for an element in the linked list.\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            display(first);
            break;

        case 2:
            if (first->next == NULL)
                printf("Linked list is empty");
            else
                printf("Linked list is not empty");
            break;
        case 3:
            insert(first);
            display(first);
            break;
        case 4:
            delete (first);
            display(first);
            break;
        case 5:
            transverseback(first);
            display(first);
            break;
        case 6:
            printf("the element you want to search: ");
            scanf("%d", &keytosearch);
            index = search(keytosearch);
            printf("the %d is at %d position", keytosearch, index + 1);
            break;
        }
    }

    return 0;
}