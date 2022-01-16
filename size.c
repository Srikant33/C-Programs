#include<stdio.h>
#include<conio.h>
int main( )
{
char ch='A';
char str[20] = "fresh2refresh.com";
float flt = 10.234;
int no = 150;
double dbl = 20.123456;
//clrscr();
printf("Character is %c \n", ch);
printf("String is %s \n" , str);
printf("Float value is %0.5f \n", flt);
printf("Integer value is %5d \n" , no);
printf("Double value is %lf \n", dbl);
printf("The sizeof int is %d \n",sizeof(int));
printf("The sizeof char is %d \n",sizeof(char));
printf("The sizeof float is %d \n",sizeof(float));
getch( );
} 