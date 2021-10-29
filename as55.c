#include <stdio.h>
#include <stdlib.h>

int stack[100];
int stack2[100];
int top = -1, n;

void push(int item);
int pop();
void empty();
void display();
int peekLowestElement();
int peekHighestElement();
int peekMiddleElement();

int main()
{
    int choice, item;
    printf("Enter the number of elements in the stack : ");
    scanf("%d", &n);
    while (1)
    {
        printf("\n1.Check if it is empty \n2.Display\n3.Push\n4.Pop\n5.Exit\n6.Lowest element\n7.Highest element \n8.Middle element ");
        printf("\n\nENTER YOUR CHOICE : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            empty();
            break;
        case 2:
            display();
            break;
        case 3:
            printf("Enter the item to be pushed : ");
            scanf("%d", &item);
            push(item);
            break;
        case 4:
            item = pop();
            printf("\nPopped item is : %d\n", item);
            break;

        case 5:
            exit(1);
            break;
        case 6:
            printf("\nLOWEST ELEMENT : %d\n", peekLowestElement());
            break;
        case 7:
            printf("\nHIGHEST ELEMENT : %d\n", peekHighestElement());
            break;
        case 8:
            printf("\n middle element :%d \n", peekMiddleElement());
            break;
        default:
            printf("\nInvalid choice\n");
        }
    }
    return 0;
}
void empty()
{
    if (top == -1)
        printf("\nStack is empty.\n");
    else
        printf("\n Stack is not empty.\n ");
}

void display()
{
    int i;
    if (top == -1)
    {
        printf("\nStack is empty\n");
        return;
    }
    printf("\nStack elements :\n\n");
    for (i = top; i >= 0; i--)
        printf(" %d\n", stack[i]);
    printf("\n");
}
void push(int item)
{
    if (top == n - 1)
    {
        printf("\nOverflow\n");
        return;
    }
    top = top + 1;
    stack[top] = item;
}

int pop()
{
    int item;
    if (top == -1)
    {
        printf("\nUnderflow\n");
        exit(1);
    }
    item = stack[top];
    top = top - 1;
    return item;
}
int peekLowestElement()
{

    int min = stack[0];
    for (int i = 0; i < n; i++)
    {
        if (min >= stack[i])
        {
            min = stack[i];
        }
    }
    return min;
}

int peekHighestElement()
{
    int max = stack[0];
    for (int i = 0; i < n; i++)
    {
        if (max <= stack[i])
        {
            max = stack[i];
        }
    }
    return max;
}
int peekMiddleElement()
{
    int k;
    if (n % 2 == 0)

    {
        k = (n / 2) + 1;
    }
    else
    {
        k = (n / 2);
    }
    return stack[k];
}