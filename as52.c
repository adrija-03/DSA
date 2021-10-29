#include <stdio.h>
#define x 100

struct stack
{
    int arr[x];
    int top;
};
void push(struct stack *s, int d)
{
    if (s->top < x - 1)
    {
        s->arr[++(s->top)] = d;
    }
    else
    {
        printf("Overflow");
    }
}
int pop(struct stack *s)
{
    return (s->top != -1) ? s->arr[(s->top)--] : -1;
}
int peak(struct stack s)
{
    return (s.top == -1) ? -1 : s.arr[s.top];
}
int isempty(struct stack s)
{
    return (s.top == -1) ? 1 : 0;
}
void bubblesort(int *a, int n)
{
    struct stack s1;
    s1.top = -1;
    for (int i = 0; i < n; i++)
    {
        push(&s1, a[i]);
    }
    struct stack s2;
    s2.top = -1;
    for (int i = 0; i < n; i++)
    {
        while (!isempty(s1))
        {
            int t = pop(&s1);
            if (isempty(s2))
            {
                push(&s2, t);
                continue;
            }
            while (t < peak(s2) && !isempty(s2))
            {
                push(&s1, pop(&s2));
            }
            if (t > peak(s2) && !isempty(s2))
            {
                push(&s2, t);
            }
            else
            {
                push(&s2, t);
            }
        }
        a[n - 1 - i] = pop(&s2);
    }
    int i = 0;
    do
    {
        printf("%d ", a[i]);
        i++;
    } while (i < n && printf(","));
}
int main()
{
    int a;
    printf("Enter the number of elements you want to sort:");
    scanf("%d", &a);
    int arr[a];

    printf("Enter the elements: \n");

    for (int i = 0; i < a; ++i)
    {
        scanf("%d", &arr[i]);
    }

    printf("Unsorted array: ");
    int i = 0;
    do
    {
        printf("%d ", arr[i]);
        i++;
    } while (i < a && printf(","));

    printf("\nSorted array:   ");
    int n = sizeof(arr) / sizeof(int);
    bubblesort(arr, n);
    return 0;
}