#include <stdio.h>
#include<conio.h>
void main( )
{
 int Grade = 'B';
 clrscr( );
 switch( Grade )
 {
 case 'A' : printf( "Excellent\n" );
 break;
 case 'B' : printf( "Good\n" );
 break;
 case 'C' : printf( "OK\n" );
 break;
 case 'D' : printf( "Mmmmm....\n" );
 break;
 case 'F' : printf( "You must do better than this\n" );
 break;
 default : printf( "What is your grade anyway?\n" );
 break;
 }
 getch( );
}