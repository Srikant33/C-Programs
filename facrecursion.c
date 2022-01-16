#include<stdio.h>
#include<conio.h>
int factorial(int n);
void main()
{
 int n;
 clrscr();
 printf("Enter an positive integer: ");
 scanf("%d",&n);
 printf("Factorial of %d = %ld", n, factorial(n));
 getch();
}
int factorial(int n)
{
 if(n!=1)
 return n*factorial(n-1);
}