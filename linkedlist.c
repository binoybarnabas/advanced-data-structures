
//linked list with the operations insertion,display,search,count

#include<stdio.h>
#include<stdlib.h>

void listinsert();
void display();
void numberofelements();
void search();

struct node
{
int data;
struct node *link;
};
int count=0;
struct node *start =NULL;

void main()
{
int choice;

while(1)
{
printf("\n enter the choice");
printf("\n 1. insert into list \n 2. display \n 3.search \n 4.count \n 5. exit");
scanf("%d",&choice);
switch(choice)
{
case 1:listinsert();
	break;
case 2:display();
	break;
case 3:search();
	break;
case 4: numberofelements();
	break;
case 5:exit(1);
default:printf("\n entered choice is wrong");
}
}
}

void listinsert()
{

int item;
struct node *tmp,*p;
printf("\n enter the elements to be inserted :");
scanf("%d",&item);
tmp = (struct node *)malloc(sizeof(struct node));
tmp->data=item;
tmp->link = NULL;
if(start == NULL)
{
start = tmp;
}
else
{
p=start;
while(p->link != NULL)
p=p->link;
p->link = tmp;
}
}

void display()
{
struct node *q;
if(start == NULL)
printf("\n the list is empty");
else
{
q = start;

while(q!= NULL)
{
printf("%d",q->data);
q=q->link;
}

}
}


void search()
{
int item,count=0;
struct node *q;
if(start == NULL)
printf("\n the list is empty");
else
{
printf("\n enter the element to be searched");
scanf("%d",&item);
q = start;
while(q != NULL)
{
count = count+1;
if(q->data == item)
{
printf("element found at position %d",count);
break;
}
q = q -> link;
}
}
}


void numberofelements()
{
struct node *ptr;
if(start == NULL)
{
printf("\nlist is empty");
}
else{

ptr = start;
while(ptr!=NULL)
{
count = count+1;
ptr=ptr->link;
}
printf("the number of elements in the list %d",count);
}
}


