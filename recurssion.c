#include<stdio.h>
#include<conio.h>
int add(int n);
void main()
{
 int n;
 clrscr();
 printf("Enter an positive integer: ");
 scanf("%d",&n);
 printf("Sum = %d",add(n));
 getch();
}
int add(int n)
{
 if(n!=0)
 return n+add(n-1); /* recursive call */
}