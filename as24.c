#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, k, t, c = 0;
    int *a, *b;
    printf("\n Enter size of the  array : ");
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int));
    b = (int *)malloc(n * sizeof(int));
    printf("\n Enter elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 1)
            c++;
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    k = 0;
    j = n - c;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            if (k < n - c)
                b[k++] = a[i];
        }
        else
        {
            if (j < n)
                b[j++] = a[i];
        }
    }
    printf("\n Array after arranging even and odd elements :\n ");
    for (i = 0; i < n; i++)
    {
        a[i] = b[i];
        printf("%d ", a[i]);
    }
    return 0;
}