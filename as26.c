#include <stdio.h>
#include <stdlib.h>
int main()
{
    int siz, i = 0, pd, *array;
    printf("Enter size of array: ");
    scanf("%d", &siz);
    array = (int *)malloc(siz * sizeof(int));
    printf("\nEnter array elements\n");
    for (i = 0; i < siz; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int a = 1; a < siz - 1; a++)
    {
        pd = array[a + 1] * array[a - 1];
        array[a] = pd;
    }
    for (i = 0; i < siz; i++)
    {
        printf(" %d ", array[i]);
    }
    return 0;
}