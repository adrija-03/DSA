#include <stdio.h>
int main()
{
int row,col,i,j,r=0,c=0,ob;
printf("ENTER ROWS: ");
scanf("%d",&row);
printf("ENTER COLS: ");
scanf("%d",&col);
int array[row][col];
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("[%d][%d]\t"
,i,j);
scanf("%d"
,&array[i][j]);
}
printf("\n");
}
printf("GIVEN ARRAY\n");
for(r=0;r<row;r++)
{
for(c=0;c<col;c++)
{
printf(" %d "
,array[r][c]);
}
printf("\n");
}
for(c=0;c<col/2;c++)
{
for(r=0;r<row;r++)
{
ob=col-c-1;
array[r][c]=array[r][c]+array[r][ob];
array[r][ob]=array[r][c]-array[r][ob];
array[r][c]=array[r][c]-array[r][ob];
}
}
printf("AFTER SWAPING\n");
for(r=0;r<row;r++)
{
for(c=0;c<col;c++)
{
printf(" %d "
,array[r][c]);
}
printf("\n");
}
return 0;
}