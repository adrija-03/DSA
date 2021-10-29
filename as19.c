#include<stdio.h>
struct Dist
{
    int km,m;
}d1,d2;
void add(int km1,int m1,int km2,int m2)
{
    int fkm,fm,d;
    fkm=km1 + km2;
    fm=m1 + m2;
    if(fm>=1000)
    {
        d=fm/1000;
        fkm+=d;
        fm%=1000;
    }
    printf("The added distance is %d km %d m",fkm,fm);
}
int main()
{
    printf("Enter first distance (km and m) : ");
    scanf("%d %d",&d1.km,&d1.m);
    printf("Enter second distance (km and m) : ");
    scanf("%d %d",&d2.km,&d2.m);
    add(d1.km,d1.m,d2.km,d2.m);
    return 0;
}