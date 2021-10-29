#include<stdio.h>
int main()
{
  int n;
  printf("Enter number of array elements you want\n");
  scanf("%d", &n);
  struct dos
  {
    int a;
  };
  struct dos d[n];
  struct dos *ptr = NULL;
  ptr=d;
  for (int x=0;x<n;x++)
  {
      printf("Enter the element\n");
      scanf("%d", &ptr ->a );
      ptr++;
      }
  printf("The entered elements are:\n");
  for(int x=0;x<n;x++)
  {
    printf("%d ", d[x].a);
  }
return 0;
}