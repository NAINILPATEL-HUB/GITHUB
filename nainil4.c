#include<stdio.h>
#include<conio.h>
void main()
{
int Y;
clrscr();
printf("enter the year");
scanf("%d",&Y);
if(Y%400==0)
{
printf("%d is a leap year");
}
else if(Y%100==0)
{
printf("%d is not a leap year ");
}
else if(Y%4==0)
{
printf("%d is a leap year");
}
getch();
}
