#include<stdio.h>
#include<stdlib.h>
void insert();
void delete();
void display();
#define N 5
int front = -1,rear = -1;
int queue[N];

void main()
{

int choice;
while(1)
	{
	printf("\n enter your choice");
	printf("\n 1.insert \n 2. delete \n 3.display \n 4.exit \n:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:insert();
		break;
		case 2:delete();
		break;
		case 3:display();
		break;
		case 4 : exit(1);
		default:printf("\n u have entered the wrong choice :(");
	}
	}
}

void insert()
{
int item;
printf("\n enter the element to be inserted :");
scanf("%d",&item);

if(front == -1 && rear == -1)
{
front = 0;
rear = 0;
queue[rear]=item;
}
else
{
rear = rear+1;
queue[rear] = item;
}
printf("\n elements inserted");
}

void delete()
{
int item;
if(front == -1 || front>rear)
{
printf("\n queue is empty");
}
else
{
item = queue[front];
printf("\n deleted element is %d",item);
front = front + 1;
}
}


void display()
{
if(rear == -1 || rear < front)
{
printf("\n queue is empty");
}

else
{
printf("\n elements in queue are");
if(front == 0)
{
for(int i=0;i < rear+1;++i)
{
printf("\t%d",queue[i]);
}
}

else{
for(int i=front;i<rear+1;++i)
{
printf("\t%d",queue[i]);
}
}
}
}

