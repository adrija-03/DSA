#include <stdio.h>
int main()
{
	int siz,i=0;
	printf("ENTER SIZE: ");
	scanf("%d",&siz);
	int array[siz];
	while(i<siz)
	{
		printf("Enter Element No-%d\n",i);
		scanf("%d",&array[i]);
		i++;
	}
	i=0;
	for(int a=0;a<siz-1;a++)
	{
		if((a==0 || a%2==0)&& array[a]%2==0)
		{
			array[a]=array[a]+array[a+1];
			array[a+1]=array[a]-array[a+1];  
			array[a]=array[a]-array[a+1];    
		}                                    
		if((a%2!=0)&& array[a]%2!=0)         
		{                                    
			array[a]=array[a]+array[a+1];
			array[a+1]=array[a]-array[a+1];
			array[a]=array[a]-array[a+1];
		}
			   
	}
	while(i!=siz)
	{
		printf(" %d ",array[i++]);
	}
	return 0;
}