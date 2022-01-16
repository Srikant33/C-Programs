#include<stdio.h>
#include<conio.h>
int check_prime(int num);
void main( )
{
 int n1,n2,i,isPrime;
 printf("Enter two numbers(intervals): ");
 scanf("%d %d",&n1, &n2);
 printf("Prime numbers between %d and %d are: ", n1, n2);
 for(i=n1+1;i<n2;++i)
 {
 isPrime=check_prime(i);
 if(isPrime==0)
 printf("%d ",i);
 }
 getch( );
}
int check_prime(int num) /* User-defined function to check prime number*/
{
 int j,isPrime=0;
 for(j=2;j<=num/2;++j)
 {
 if(num%j==0)
 {
 isPrime=1;
 break;
 }
 }
 return isPrime;
}