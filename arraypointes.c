#include <stdio.h>
#include<conio.h>
void main( )
{
int data[5], i;
 clrscr( );
printf("Enter elements: ");
for(i=0;i<5;++i)
scanf("%d",data+i);
printf("You entered: ");
for(i=0;i<5;++i)
printf("%d\n",*(data+i));
getch( );
}