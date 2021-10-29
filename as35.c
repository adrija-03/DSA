#include <stdio.h>
#include <stdlib.h>
 
// A Linked List Node
struct Node
{
    int data;
    struct Node *next;
};
 
// Helper function to insert a new node at the beginning of the linked list
void push(struct Node** headRef, int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
 
    newNode->data = data;
    newNode->next = *headRef;
    *headRef = newNode;
}
 
// Helper function to print the linked list
void printList(char *msg, struct Node *node)
{
    printf("%s: ", msg);
    while (node)
    {
        printf("%d  ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}
 
// Function to swap the k'th node from the beginning with the
// k'th node from the end in a linked list
void swapNodes(struct Node **headRef, int k)
{
    struct Node *x, *y, *prev_x = NULL, *prev_y = *headRef;
 
    // Find the k'th node from the beginning and store it in `x`.
    // Also, calculate the previous node of `x` and store it in `prev_x`.
    struct Node* curr = *headRef;
    for (int i = 1; i < k && curr; i++)
    {
        prev_x = curr;
        curr = curr->next;
    }
    x = curr;
 
    // If `k` is more than the total number of nodes, `X` and `Y` doesn't exist
    if (curr == NULL) {
        return;
    }
 
    // Find the k'th node from the end and store it in `y`.
    // Also, calculate the previous node of `y` and store it in `prev_y`.
    struct Node* ptr = *headRef;
    while (curr->next)
    {
        prev_y = ptr;
        ptr = ptr->next;
        curr = curr->next;
    }
    y = ptr;
 
    // `Y` is next to `X` (`X —> Y`)
    if (x->next == y)
    {
        x->next = y->next;
        y->next = x;
        prev_x->next = y;
    }
 
    // `X` is next to `Y` (`Y —> X`)
    else if (y->next == x)
    {
        y->next = x->next;
        x->next = y;
        prev_y->next = x;
    }
 
    // `X` is the head node
    else if (x == *headRef)
    {
        *headRef = y;
        y->next = x->next;
        prev_y->next = x;
        x->next = NULL;
    }
 
    // `Y` is the head node
    else if (y == *headRef)
    {
        *headRef = x;
        x->next = y->next;
        prev_x->next = y;
        y->next = NULL;
    }
 
    // Otherwise
    else {
        ptr = y->next;
        y->next = x->next;
        x->next = ptr;
 
        prev_x->next = y;
        prev_y->next = x;
    }
}
 
int main(void)
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    unsigned n = sizeof(arr)/sizeof(arr[0]);
 
    struct Node* head = NULL;
    for (int i = n - 1; i >= 0; i--) {
        push(&head, arr[i]);
    }
 
    printList("Before", head);
 
    int k = 2;
    swapNodes(&head, k);
 
    printList("After ", head);
 
    return 0;
}