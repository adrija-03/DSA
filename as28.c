#include <stdlib.h>
#include <stdio.h>
int main()
{
	int siz,i=0,*array;
	printf("ENTER SIZE: ");
	scanf("%d",&siz);
	array=(int*)malloc(siz*sizeof(int));
	while(i<siz)
	{
		printf("Enter Element No-%d\n",i);
		scanf("%d",&array[i]);
		i++;
	}
	for(int a=0;a<siz-1;a++)
	{   
		for(int b=a+1;b<siz;b++)
		{
			if(array[a]>=array[b]){
				array[a]=array[b]+array[a];
				array[b]=array[a]-array[b];
				array[a]=array[a]-array[b]; 
				}
		}
	}		
    printf("%d Smallest = %d\n%d Largest = %d",siz-1,array[siz-2],siz-1,array[1]);
	return 0;
}