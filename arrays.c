#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,mat1[10][10],mat2[10][10],mat3[10][10];
int row1,col1,row2,col2;
clrscr();
printf("\n Enter the rows of first matrix :");
scanf("%d",&row1);
printf("\n Enter the column of the first matrix :");
scanf("%d",&col1);
printf("\n Enter the row of the second matrix :");
scanf("%d",&row2);
printf("\n Enter the column of the second matrix :");
scanf("%d",&col2);
printf("\n Enter the elements of the first matrix");
for(i=0;i<row1;i++)
{
for(j=0;j<col1;j++)
{
printf("\n mat1[%d][%d]=",i,j);
scanf("%d",&mat1[i][j]);
}
}
printf("\n Enter the elements of the second matrix ");
for(i=0;i<row2;i++)
{
for(j=0;j<col2;j++)
{
printf("mat2[%d][%d]=",i,j);
scanf("%d",&mat2[i][j]);
}
}
/* Sum */
for(i=0;i<row1;i++)
{
for(j=0;j<col1;j++)
{
mat3[i][j]=mat1[i][j]+mat2[i][j];
}
}
/* Output */
for(i=0;i<row1;i++)
{
for(j=0;j<col1;j++)
{
printf("%d\t",mat3[i][j]);
}
printf("\n");
}
getch();
}