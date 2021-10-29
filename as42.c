#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node;
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
    (*head_ref) = new_node;
}

// Function to check if list is palindrome or not
int isPalindrome(struct Node *left)
{
    if (left == NULL)
        return 1;

    // Find rightmost node
    struct Node *right = left;
    while (right->next != NULL)
        right = right->next;

    while (left != right)
    {
        if (left->data != right->data)
            return 0;

        left = left->next;
        right = right->prev;
    }

    return 0;
}

// Driver program
int main()
{
    struct Node *head = NULL;
    push(head, 1);
    push(head, 2);
    push(head, 3);
    push(head, 2);
    push(head, 1);

    if (isPalindrome(head))
        printf("It is Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}