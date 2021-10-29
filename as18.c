#include<stdio.h>
struct Emp
{
    char name[30],gen[6],des[20],dept[30];
    float bp,hr,da,gp;
};
int main()
{
    int n;
    printf("Enter number of employees\n");
    scanf("%d",&n);
    struct Emp e[n];
    for(int x=0;x<n;x++)
    {
        printf("Enter name of the employee : ");
        scanf("%s",&e[x].name);
        printf("Enter gender of the employee : ");
        scanf("%s",&e[x].gen);
        printf("Enter designation of the employee : ");
        scanf("%s",&e[x].des);
        printf("Enter department of the employee : ");
        scanf("%s",&e[x].dept);
        printf("Enter basic pay of the employee : ");
        scanf("%f",&e[x].bp);
        printf("\n");
    }
    for(int x=0;x<n;x++)
    {
        e[x].hr=0.25 * e[x].bp;
        e[x].da=0.75 * e[x].bp;
        e[x].gp=e[x].bp+e[x].hr+e[x].da;
    }
    printf("\nThe details are................");
    for(int x=0;x<n;x++)
    {
        printf("\nEmployee Name : %s",e[x].name);
        printf("\nEmployee Gender : %s",e[x].gen);
        printf("\nEmployee Designation : %s",e[x].des);
        printf("\nEmployee Department : %s",e[x].dept);
        printf("\nEmployee Basic Pay : Rs %0.2f",e[x].bp);
        printf("\nEmployee Gross Pay : Rs %0.2f",e[x].gp);
        printf("\n");
    }
    return 0;
}