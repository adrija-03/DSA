#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *p,n,x;
  int max=0;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  p=(int*)malloc(n*sizeof(int));
  printf("\nEnter the elements:\n");
  for(x=0;x<n;x++)
{
  scanf("%d",&p[x]);
}
  printf("Entered elements are:\n");
  for(x=0;x<n;x++)
{
  printf("\n%d",p[x]);
}
  printf("\nReverse array is:");
  for(x=n-1;x>=0;x--)
{
  printf("\n%d",p[x]);
}
  return 0;
}