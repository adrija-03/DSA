#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, j, t,  prod=1 , sumupr=0, c=0, us;
    printf("Enter the number of elements you want to enter\n");
    scanf("%d", &n);
    int *arr[n];
    for (i=0; i<n; i++)
         arr[i] = (int *)calloc(n,sizeof(int));
    printf("Enter the elements one by one\n");
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        scanf("%d" , &arr[i][j]);
    }
    }
    printf("The entered array is:\n");
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        printf("%d " , arr[i][j]);
    }
    printf(" \n");
    }
    printf("For the number of non zero elements press 1\n");
    printf("For the sum of elements above the leading diagonal press 2\n");
    printf("To display the elements below the minor diagonal press 3\n");
    printf("For the product of the diagonal elements press4\n");
    scanf("%d" , &us);
    if(us==1)
    {
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        if(arr[i][j]!=0)
        {
            c++;
        }
    }

    }
    printf("No of non zero elements:%d\n" , c);
    }
    if(us==2)
    {
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        if(j<i)
        {
            sumupr= sumupr + arr[i][j];
        }
    }

    }
    printf("Sum of elements above leading diagonal: %d\n", sumupr);
    }
    if(us==3)
    {
    printf("Elements below the minor diagonal:\n");
     for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        if((i+j)>=n)
        {
        printf("%d " , arr[i][j]);
        }
        else
        printf("_ ");
    }
    printf(" \n");
    }
    }
    if(us==4)
    {
     for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        if(i==j)
        {
            prod = prod*arr[i][j];
        }
    }

    }
    printf("Product of diagonal elements: %d", prod);
    }
    else if(us>4)
    {
    printf("Invalid input\n");
    }
    return 0;
}
