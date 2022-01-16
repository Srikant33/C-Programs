#include<stdio.h>
#include<conio.h>
void main( )
{
 int a,b,c;
 clrscr( );
 printf("\n enter the first no. ");
 scanf("%d",&a);
 printf("\n enter the second no. ");
 scanf("%d",&b);
 printf("\n enter the third no. ");
 scanf("%d",&c);
 if(a>=b&&a>=c)
 {
 printf("\n greatest no. is %d ",a);
 }
 else if(b>=a&&b>=c)
 {
 printf("\n greatest no. is %d",b);
 }
 else if(c>=a&&c>=b)
 {
 printf("\n greatest no. is %d",c);
 }
 else
 {
 printf("\n all no.s are equal %d %d %d",a,b,c);
 }
 getch( );
}