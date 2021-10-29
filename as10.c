#include <stdio.h>  
int func(int n)  
{  
    static int c2=0;
  if(n>0)  
  {  
      c2++;  
      func(n/10);  
  }  
    else  
    return c2;  
}  
int main()  
{  
    int num,c=0;
    printf("Enter a number");  
    scanf("%d",&num);  
    c=func(num);  
    printf("Number of digits is : %d", c);  
    return 0;  
}  
