#include <stdio.h>
#include<conio.h>
void main( )
{
 int n, count, sum=0;
 clrscr( );
 printf("Enter the value of n.\n");
 scanf("%d",&n);
 for(count=1;count<=n;++count)
 {
 sum+=count;
 }
 printf("Sum=%d",sum);
 getch( );
}