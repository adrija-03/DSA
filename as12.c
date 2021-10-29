#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rem,rev=0,rnum=0,count=0;;
    long int n,an;
    printf("Enter any Number\n");
    scanf("%ld",&n);
    an=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    while(rev>0)
    {
        rem=rev%10;
        count++;
        if(count%2==1)
        rnum=rnum*10+rem;
        rev=rev/10;
    }
    printf("Original Number = %ld\n",an);
    printf("Number after removing digits at even position is = %d",rnum);
    return 0;
}