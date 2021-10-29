#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, j, t, a, b;
    int aa=0, bb=0;
    printf("Enter the limit\n");
    scanf("%d", &n);
    int *arr;
    arr = (int*)calloc(n,sizeof(int));
    printf("Enter the array elements \n");  
    for(i=0;i<n;i++)
    {
        scanf("%d" , &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]>arr[i])
            {
                printf("%d  %d\n", arr[i], arr[j]);
                break;
                
            }
            else if(j==(n-1))
            printf("%d  -1\n" , arr[i] );
        }
    }
   printf("%d -1\n", arr[n-1]);
   return 0;
}