#include<stdio.h>
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
    struct Dist
    {
        int km,m;
    };
    struct Dist d[2];
    struct Dist *ptr=NULL;
    ptr=d;
    for(int x=0;x<2;x++)
    {
        printf("Enter distance (km and m) : ");
        scanf("%d %d",&ptr->km,&ptr->m);
        printf("\n");
        ptr++;
    }
    add(d[0].km,d[0].m,d[1].km,d[1].m);
    return 0;
}