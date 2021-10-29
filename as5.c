#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, j, t, a, b;
    int aa=0, bb=0;
    printf("Enter the size of the array \n");
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
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("Array after sorting \n");
    for(i=0;i<n;i++)
    {
      printf("%d ", arr[i]);
    }
    printf(" \n");
    int ul, ll;
    printf("Enter the upper limit and lower limit\n");
    scanf("%d %d" , &ll , &ul);
    for(i=0;i<n;i++)
    {
        if (arr[i]==ll)
        {

         a = i;

        aa++;
        break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]==ul)
        {
        b = i;

        bb++;
        break;
        }

    }
    if((aa!=0)&&(bb!=0))
    {
    for(i=a;i<=b;i++)
    {
        printf("%d ", arr[i]);
    }
  }
  else
  printf("Either of the limit is not in the array \n" );


    return 0;


}