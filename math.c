#include<stdio.h>
#include<conio.h>
void main( )
{
int n1,n2;
int a,b,c,d;
float e;
clrscr( );
printf(“Enter the first number :”);
scanf(“%d”,&n1);
printf(“\n Enter the second number :”);
scanf(“%d”,&n2);
a=n1+n2;
printf(“\n Sum is %d”,a);
b=n1-n2;
printf(“\n Subtraction is %d”,b);
c=n1*n2;
printf(“\n Multiplication is %d”,c);
d=n1%n2;
printf(“\n Modulus is %d”,d);
e=n1/n2;
printf(“\n Division is %f”,e);
getch( );
}