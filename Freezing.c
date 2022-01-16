#include<stdio.h>
#include<conio.h>
void main( )
{
float t;
clrscr( );
printf(“Enter the temprature :”);
scanf(“%f”,&t);
if(t>32)
printf(“\n Above Freezing Point.”);
else
printf(“\n Below Freezing Point.”);
getch( );
}