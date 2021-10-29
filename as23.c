#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *ptr, x, y;
    printf("Enter ne of array : ");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements\n");
    for (x = 0; x < n; x++)
    {
        scanf("%d", &ptr[x]);
    }
    for (x = 0; x < n - 1; x++)
    {
        for (y = x + 1; y < n; y++)
        {
            if (ptr[x] >= ptr[y])
            {
                ptr[x] = ptr[y] + ptr[x];
                ptr[y] = ptr[x] - ptr[y];
                ptr[x] = ptr[x] - ptr[y];
            }
        }
    }
    printf("Second largest = %d\nSecond smallest = %d", ptr[n - 2], ptr[1]);
    return 0;
}
