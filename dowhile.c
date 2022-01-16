//The program adds all the number entered by user untill user enters 0.
#include<stdio.h>
#include<conio.h>
void main()
{
 int sum=0,num;
 clrscr();
 do
 {
 printf("Enter a number\n");
 scanf("%d",&num);
 sum+=num;
 }
 while(num!=0);
 printf("sum=%d",sum);
 getch();
}