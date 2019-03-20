#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j;
clrscr();
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
for(j=i+1;i<5;j++)
{
if(a[i]==a[j])
{
printf("%d is the missing value",a[i]);
}
}
}
getch();
}
