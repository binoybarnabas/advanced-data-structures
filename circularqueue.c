#include<stdio.h>
#include<stdlib.h>
void insert();
void delete();
void display();
#define max 5
int queue[max];
int front=-1,rear=-1;
void main()
{
int choice;
while(1)
{
printf("\n enter the choice:");
printf("\n 1. insert \n 2.delete \n 3.display \n 4.exit");
scanf("%d",&choice);
switch(choice){
case 1:insert();break;
case 2:delete(); break;
case 3:display();break;
case 4:exit(0);
default:printf("invalid choice");
}
}
}

void insert()
{
int item,counter=1;
printf("\nenter the item to be inserted:");
scanf("%d",&item);
if(((front==0) && (rear == max-1)) || (front == rear+1))
printf("\n overflow");
else{
if(front == -1 && rear == -1)
{
front=0;
rear=0;
}
else if(rear == max-1 && front!=rear)
rear = 0;
else
rear = rear+1;
queue[rear]=item;
printf("\n%d item inserted:",queue[rear]);
}
}  

void delete()
{
int val;
if(front == -1)
printf("\n underflow");
else
{
val = queue[front];
printf("deleted element is %d",val);
if(front == rear)
{
front =-1;
rear=-1;
}
else if(front == max-1)
front = 0;
else
front =front+1;
}
}

void display()
{
int i;
if(front == -1 && rear == -1)
printf("\n queue is empty");
else{
printf("\n queue is");
if(rear<front || rear == 0)
 {
for(i=0;i<=rear;++i)
printf("\n %d",queue[i]);
}
if(front<rear || front<max)
{
for(i=front ;i<max;++i)
printf("\n %d",queue[i]);
}
}
}
