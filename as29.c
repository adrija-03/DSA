#include <stdlib.h>
#include <stdio.h>
int main()
{
    int siz, i = 0, l = 0, cnt = 0, *a;
    printf("Enter array size : ");
    scanf("%d", &siz);
    a = (int *)malloc(siz * sizeof(int));
    printf("Enter the elements ");
    while (i < siz)
    {
        scanf("%d", &a[i]);
        (a[i] >= l) ? l = a[i] : l;
        i++;
    }
    i = 0;
    while (i < siz)
    {
        (a[i] == l) ? (l != 0 ? cnt++ : cnt) : l;
        i++;
    }
    printf("Largest=%d\nOccurence=%d", l, cnt);
    return 0;
}
