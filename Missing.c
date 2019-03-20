#include<stdio.h>
#include<conio.h>
void  main()
{
int i,j,a[10],n;
clrscr();
printf("Enter tbe numbers");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
j=a[0];
for(i=0;i<n;i++)
{
if(a[i]!=j)
{
printf("%d the missing value",j);
j=j+2;
}
else
{
j=j+1;
}
}
getch();
}


