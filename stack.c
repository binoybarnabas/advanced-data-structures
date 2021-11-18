#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int topp();
#define N 5
int stack[N],top=-1;
void main()
{
int choice,topreturn;
while(1)
{
printf("\n 1.push \n 2.pop \n 3.display \n 4.top \n 5.exit");
scanf("%d",&choice);
switch(choice)
{
case 1 : push();
	break;
case 2: pop();
	break;
case 3: display();
	break;
case 4: topreturn = topp();
	printf("top is %d",topreturn);
	break;
case 5:exit(1);
default:("\n invalid choice");
}
}
}


void push()
{
int push,val;
if(top >= N)
{
printf("\n stack overflow");
}
else
{
top = top+1;
printf("\n enter the item to be inserted");
scanf("%d",&val);
stack[top]= val;
}
}

void pop()
{
int pop;
if(top == -1)
{
printf("\nstack underflow");
}
else
{
pop = stack[top];
printf("\n popped item is %d",pop);
top = top-1;
}
}


void display()
{
if(top<=N && top!=-1)
{
printf("\n stack elements are ");
for(int i=top;i>=0;i--)
{
printf("\n %d",stack[i]);
}
}
else
{
printf("no elements on the stack");
} 
}

int topp()
{
return top;
}
