#include<stdio.h>
int main()
{
int ar[20],x,n,high,low;
printf("Enter the size of array :\n");
scanf("%d",&n);
printf("Input the array elements :\n");
for(x=0;x<n;x++)
scanf("%d",&ar[x]);

high=low=ar[0];

for(x=1;x<n;x++)
{
if(ar[x]>high)
high=ar[x];

if(ar[x]<low)
low=ar[x];
}

printf("The smallest element is %d\n",low);
printf("The largest element is %d\n",high);

return 0;
}