#include <stdio.h>
#include <stdlib.h>
struct node *head = NULL;
struct node
{
    int data;
    struct node *link;
};
struct node *reverse(struct node *head)
{
    if (head == NULL)
        printf("\nThe Linked List is Empty\n");
    else
    {
        struct node *prev = NULL, *next = NULL;
        while (head != NULL)
        {
            next = head->link;
            head->link = prev;
            prev = head;
            head = next;
        }
        head = prev;
    }
    return head;
}
struct node *create(struct node *head)
{
    struct node *new_node, *ptr;
    int num;
    printf("Enter -1 to Stop.\n");
    printf("Enter Data: ");
    scanf("%d", &num);
    while (num != -1)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->link = NULL;
        new_node->data = num;
        if (head == NULL)
        {
            head = new_node;
            ptr = head;
        }
        else
        {
            ptr->link = new_node;
            ptr = new_node;
        }
        printf("Enter Data: ");
        scanf("%d", &num);
    }
    return head;
}
struct node *display(struct node *head)
{
    if (head == NULL)
        printf("\nThe Linked List is Empty\n");
    else
    {
        struct node *ptr = head;
        while (ptr != NULL)
        {
            printf("%d\t", ptr->data);
            ptr = ptr->link;
        }
    }
    return head;
}
struct node *insertbeg(struct node *head)
{
    struct node *new_node;
    int n;
    printf("Enter New Data: ");
    scanf("%d", &n);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = n;
    new_node->link = head;
    head = new_node;
    return head;
}
struct node *insertend(struct node *head)
{
    struct node *new_node, *ptr = head;
    int n;
    printf("Enter New Data: ");
    scanf("%d", &n);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = n;
    new_node->link = NULL;
    while (ptr->link != NULL)
        ptr = ptr->link;
    ptr->link = new_node;
    return head;
}
struct node *deletebeg(struct node *head)
{
    struct node *ptr = head;
    head = ptr->link;
    free(ptr);
    ptr = NULL;
    return head;
}
struct node *deleteend(struct node *head)
{
    struct node *ptr = head, *prev;
    while (ptr->link != NULL)
    {
        prev = ptr;
        ptr = ptr->link;
    }
    prev->link = NULL;
    free(ptr);
    ptr = NULL;
    return head;
}
struct node *check(struct node *head)
{
    if (head == NULL)
        printf("\n***The Linked List is Empty**\n\n");
    else
        printf("\n***The Linked List Already Exists!*\n\n");
    return head;
}
struct node *count(struct node *head)
{
    int c = 0;
    if (head == NULL)
        printf("\nThe Linked List is Empty\n");
    else
    {
        struct node *ptr = head;
        while (ptr != NULL)
        {
            c++;
            ptr = ptr->link;
        }
        printf("\nNumber of Elements: %d\n\n******\n", c);
    }
    return head;
}
struct node *oddeven(struct node *head)
{
    int o = 0, e = 0;
    if (head == NULL)
        printf("\nThe Linked List is Empty\n");
    else
    {
        struct node *ptr = head;
        while (ptr != NULL)
        {
            if (ptr->data % 2 == 0)
                e++;
            else
                o++;
            ptr = ptr->link;
        }
        printf("\nNumber of Odd Elements: %d\n", o);
        printf("\nNumber of Even Elements: %d\n\n******\n", e);
    }
    return head;
}
struct node *prime(struct node *head)
{
    int c = 0, flag = 0, i, n;
    if (head == NULL)
        printf("\nThe Linked List is Empty\n");
    else
    {
        struct node *ptr = head;
        while (ptr != NULL)
        {
            n = ptr->data;
            for (i = 2; i <= n / 2; i++)
            {
                if (n % i == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                c++;
            ptr = ptr->link;
        }
        printf("\nNumber of Prime Numbers: %d\n\n******\n", c);
    }
    return head;
}
int palin(struct node *head)
{
    struct node *ptr = head, *start = NULL, *new_node, *p;
    int c = 1;
    while (ptr)
    {
        new_node = (struct node *)malloc(sizeof(struct node));
        new_node->data = ptr->data;
        if (start == NULL)
        {
            new_node->link = NULL;
            start = new_node;
        }
        else
        {
            p = start;
            while (p->link != NULL)
                p = p->link;
            p->link = new_node;
            new_node->link = NULL;
        }
        ptr = ptr->link;
    }
    start = reverse(start);
    p = start;
    ptr = head;
    while (ptr)
    {
        if (ptr->data == p->data)
        {
            ptr = ptr->link;
            p = p->link;
        }
        else
        {
            c--;
            break;
        }
    }
    return c;
}
int main()
{
    int ch;
    printf("*LINKED LIST MAIN MENU*\n");
    do
    {
        printf("1. Create a Linked List\n");
        printf("2. Traverse the Linked List\n");
        printf("3. Check if the Linked List is Empty or Not\n");
        printf("4. Insert a Node at Beginning\n");
        printf("5. Delete a Node at Beginning\n");
        printf("6. Insert a Node at End\n");
        printf("7. Delete a Node at End\n");
        printf("8. Count Total Number of Elements\n");
        printf("9. Count Total Number of Odd and Even Elements.\n");
        printf("10. Count Total Number of Prime Numbers\n");
        printf("11. Check if the List is Palindrome or Not.\n");
        printf("12. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &ch);
        if (ch == 1)
        {
            head = create(head);
            printf("\n***LINKED LIST CREATED*\n\n");
        }
        else if (ch == 2)
        {
            printf("\nDisplaying Linked List:\n");
            head = display(head);
            printf("\n\n");
        }
        else if (ch == 3)
            head = check(head);
        else if (ch == 4)
        {
            head = insertbeg(head);
            printf("\n***LINKED LIST MODIFIED*\n\n");
        }
        else if (ch == 5)
        {
            head = deletebeg(head);
            printf("\n***LINKED LIST MODIFIED*\n\n");
        }
        else if (ch == 6)
        {
            head = insertend(head);
            printf("\n***LINKED LIST MODIFIED*\n\n");
        }
        else if (ch == 7)
        {
            head = deleteend(head);
            printf("\n***LINKED LIST MODIFIED*\n\n");
        }
        else if (ch == 8)
            head = count(head);
        else if (ch == 9)
            head = oddeven(head);
        else if (ch == 10)
            head = prime(head);
        else if (ch == 11)
        {
            int c = palin(head);
            if (c == 1)
                printf("\n***Given Linked List is Palindrome*\n\n");
            else
                printf("\n***Given Linked List is not Palindrome*\n\n");
        }
    } while (ch != 12);
}