#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#define max 5
int ch,top=-1,stack[max];
void push();
void pop();
void display();
void  main()
{
int ch;
while(1)
{
printf("Enter the choice");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
       break;
case 2:pop();
       break;
case 3:display();
       break;
default:printf("Error");
}
}
}
void push()
{
int val;
if(top==max-1)
{
printf("Stack is full");
}
else
{
printf("enter value to be pushed");
scanf("%d",&val);
top=top+1;
stack[top]=val;
}
}
void pop()
{
if(top==-1)
{
printf("Stack us empty");
}
else
{
top=top-1;
}
}
void display()
{
int i;
if(top==-1)
{
printf("Stack is empty");
}
else
{
for(i=top;i>=0;i--)
{
printf("%d\n",stack[i]);
}
}
}






