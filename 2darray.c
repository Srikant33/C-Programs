#include <stdio.h>
#include<conio.h>
void main( )
{
 int i,j;
 int arr[3][4]={
 {0,1,2,3},
 {4,5,6,7},
 {8,9,10,11},
 };
 clrscr( );
 for(i=0;i<3;i++)
 {
 for(j=0;j<4;j++)
 {
 printf(ā\n arr[%d][%d]=%dā,i,j,arr[i][j]);
 }
 }
 getch( );
}