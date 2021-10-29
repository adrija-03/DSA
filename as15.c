#include <stdio.h>
int lcm(int a,int b)
{
    int max;
    max = (a>b)?a:b;
    while (1) 
    {
        if ((max % a == 0) && (max % b == 0)) 
        {
            printf("The LCM of %d and %d is %d.", a,b,max);
            break;
        }
        max++;
    }
    return 0;
}
int main() 
{
    int n1, n2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    lcm(n1,n2);
    return 0;
}
