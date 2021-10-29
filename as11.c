#include <stdio.h>
int first(int a)
{
    int f;
    f= a;
    while(f>10)
    {
        f=f/10;
    }
    printf("First digit = %d", f);
    return 0;
}
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    first(n);
    return 0;
}