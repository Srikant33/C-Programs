#include <stdio.h>
#include<conio.h>
int hcf(int n1, int n2);
void main()
{
 int n1, n2;
 clrscr();
 printf("Enter two positive integers: ");
 scanf("%d%d", &n1, &n2);
 printf("H.C.F of %d and %d = %d", n1, n2, hcf(n1,n2));
 getch();
}
int hcf(int n1, int n2)
{
 if (n2!=0)
 return hcf(n2, n1%n2);
 else
 return n1;
}