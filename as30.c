#include <stdlib.h>
#include <stdio.h>
int main()
{
	int siz, i = 0, z = 0, o = 0, *array;
	printf("ENTER SIZE: ");
	scanf("%d", &siz);
	array = (int *)malloc(siz * sizeof(int));
	while (i < siz)
	{
		printf("Enter Element No-%d\n", i);
		scanf("%d", &array[i]);
		array[i] == 0 ? z++ : o++;
		i++;
	}
	i = 0;
	while (i < siz)
	{
		array[i] = i < z ? 0 : 1;
		printf("%d ", array[i]);
		i++;
	}
	return 0;
}