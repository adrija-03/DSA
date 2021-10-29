#include<stdio.h>
#include<math.h>
float power(int a,int b)
{
    float p;
    p=pow(a,b);
    return p;
}
int main()
{
    int x,y;
    printf("Enter the values of x and y");
    scanf("%d %d",&x,&y);
    printf("%f",(power(x,y)));
    return 0;
}