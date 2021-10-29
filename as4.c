#include<stdio.h>
#include<stdlib.h>
int main()
{
      int *ar,n,x,y,t;
      printf("Enter the size of the array: ");
      scanf("%d",&n);
      ar=(int *)malloc(n *sizeof(int));
      printf("\n Enter the elements \n");
      for(x=0;x<n;x++)
      {
            scanf("%d", (ar+x));
      }
      for(x=0;x<n;x++)
      {
            for(y=0;y<=x;y++)
            {
                  if(*(ar+x)<*(ar+y))
                  {
                        t=*(ar+x);
                        *(ar+x)=*(ar+y);
                        *(ar+y)=t;
                  }
            }
      }
      printf("\nAfter sorting the array : ");
      for(x=0;x<n;x++)
      printf("\n%d",*(ar+x));
      return 0;
}