#include<stdio.h>
#include<conio.h>
void main( )
{
 int i,j;
 clrscr( );
 for(i=0;i<=4;i++)
 {
 for(j=0;j<=i;j++)
 {
 printf(“%c”,’A’+i);
 }
 printf(“\n”);
 }
 getch( );
}