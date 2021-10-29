#include <stdio.h>
int findSum(int ar[], int n)
{
    if (n <= 0)
        return 0;
    return (findSum(ar,(n-1))+ar[n-1]);
}
int main()
{
    int a[20],no,x;
    printf("Enter the size of array");
    scanf("%d",&no);
    printf("Enter the elements");
    for(x=0;x<no;x++)
    scanf("%d",&a[x]);
    printf("%d", findSum(a, no));
    return 0;
}