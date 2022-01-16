#include<stdio.h>
#include<conio.h>
void main( )
{
int a,b,sum,i,n;
clrscr( );
a=0;
b=1;
printf("\n enter the limit of series ",&n);
scanf("%d",&n);
printf("\n fibonacci series \n ");
printf("\t %d \t %d",a,b);
for(i=0;i<n;i++)
 {
 sum=a+b;
 a=b;
 b=sum;
 printf("\t %d",sum);
 }
getch( );
}