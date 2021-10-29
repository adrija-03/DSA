#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *arr, x, y, i, j;
    printf("Enter size of array: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("\nEnter the elements \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter X and Y: ");
    scanf("%d %d", &x, &y);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == y)
        {
            j = i;
            while (arr[j] != x)
            {
                j--;
                if (j < 0 || arr[j] == x)
                    break;
            }
            printf("Difference %d", (i - j));
            break;
        }
    }
    return 0;
}
