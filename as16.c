#include<stdio.h>
int even_sum(int n)
{
    if(n==0)
    return 0;
    if((n%10)%2==0)
    return (n%10) + even_sum(n/10);
    else
    return even_sum(n/10);
}
int main()
{
    int a,b;
    printf("Enter the numbers \n");
    scanf("%d",&a);
    printf("The sum is %d\n",even_sum(a));
    return 0;
}