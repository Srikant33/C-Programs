#include<stdio.h>
#include<conio.h>
void main( )
{
int x,y,sum;
float avg;
clrscr( );
printf(“Enter x :”);
scanf(“%d”,&x);
printf(“\n Enter y :”);
scanf(“%d”,&y);
sum=x+y;
avg=sum/2;
printf(“\n Average is : %f ”,avg);
getch( );
}