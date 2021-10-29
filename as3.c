#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, x, *ar, ns, c=0;
    printf("Enter limit\n");
    scanf("%d", &n);
    ar = (int*)calloc(n,sizeof(int));
    printf("Enter the elements\n");
    for(x=0;x<n;x++)
    {
        scanf("%d" , &ar[x]);
    }
    printf("Enter the number to be searched\n");
    scanf("%d", &ns );
    for(x=0;x<n;x++)
    {
        if(ns==ar[x])
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("%d is present in the array\n" , ns);
    }
    else
    {
        printf("%d is not present in the array\n", ns);
    }
    return 0;
}