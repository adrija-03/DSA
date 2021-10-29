#include<stdio.h>
void pal(int n)
{
    int copy,d,num=0;
    copy = n;
    while(copy>0)
    {
        d=copy%10;
        num=num*10+d;
        copy/=10;
    }
    if(n==num)
    printf("Palindrome no.");
    else
    printf("Not palindrome no.");
}
int main()
{
    int no;
    printf("Enter a number");
    scanf("%d",&no);
    pal(no);
    return 0;
}
