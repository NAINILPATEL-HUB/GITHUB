
#include<stdio.h>
#include<conio.h>
int main()
{
int n,j,t;
int i,a[5],b[5],c[10];
for(i=0;i<5;i++)
{
printf("enter the value of a:");
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
printf("enter the value of b:");
scanf("%d",&b[i]);
}
for(i=0;i<10;i++)
{
c[i]=a[i];
}
for(i=0;i<10;i++)
{
c[i+5]=b[i];
}
for(j=0;j<10;j++)
{
for(i=0;i<(i-j-1);i++)
{
if(c[i]>c[i+1])
{
t=c[i];
c[i]= c[i+1];
c[i+1]=t;
}
}
}
for(i=0;i<10;i++)
{
printf("sorting of c is %d\n",c[i]);
}
return 0;
}
