#include <stdio.h>
#include <stdlib.h>
int main()
{
    int siz, *arr, i;
    printf("Enter size of array : ");
    scanf("%d", &siz);
    arr = (int *)malloc(siz * sizeof(int));
    printf("\nEnter the elements\n");
    for (i = 0; i < siz; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int a = 0; a < siz - 1; a++)
    {
        for (int b = a + 1; b < siz; b++)
        {
            if (arr[a] <= arr[b])
            {
                arr[a] = arr[b] + arr[a];
                arr[b] = arr[a] - arr[b];
                arr[a] = arr[a] - arr[b];
                break;
            }
        }
    }
    for (i = 0; i < siz; i++)
    {
        printf(" %d ", arr[i]);
    }
    return 0;
}
