#include<stdio.h>
#include<conio.h>
void main( )
{
 int n=0;
 clrscr( );
 a: n=n+1; /* 'a:' is the label */
 printf("\t %d",n);
 if(n>=100)
 {
 goto b;
 }
 goto a;
 b: printf("\n End of the program"); /* 'b' label */
 getch();
}