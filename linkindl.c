//linked list with insertion and deleteion from the front , last in between some elements

#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *link;
};
void insertatbegin();
void insertinbetween();
void insertatend();
void delfrombeg();
void delinbetween();
void delfromlast();
void display();
void createalist();
struct node *start = NULL;

void main()
{
int choice;
while(1)
{
printf("\n enter the choice:");
printf("\n0.create list \n1. enter at the beginning \n2.enter in between \n3.enter at the last \n4.delete from the beginning \n5.delete in between (any) \n6.delete from the last \n7.display \n 8.exit");
scanf("%d",&choice);

switch(choice)
{
case 0:createalist();
	break;
case 1:insertatbegin();
	break;
case 2:insertinbetween();
	break;
case 3:insertatend();
	break;
case 4:delfrombeg();
	break;
case 5:delinbetween();
	break;
case 6:delfromlast();
	break;
case 7:display();
	break;
case 8:exit(1);

default:printf("invalid choice");

}

}

}

void createalist()
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


void insertatbegin()
{
struct node *ptr;
int item;
ptr = (struct node *)malloc(sizeof(struct node));
if(start == NULL)
{
printf("\n list is empty");
}
else
{
printf("\nenter the element to be inserted:");
scanf("%d",&item);
ptr->data =item;
ptr->link = start;
start = ptr;
}
}

void insertinbetween()
{
struct node *ptr,*temp,*new;
int item1,item2;
if(start == NULL)
printf("\nlist is empty");
else
{
new = (struct node *)malloc(sizeof(struct node));
printf("\nenter the element to be inserted:");
scanf("%d",&item1);
new->data = item1;
printf("\nenter the element after which the element should be inserted:");
scanf("%d",&item2);
ptr = start;
while(ptr!=NULL)
{
if(ptr->data == item2)
{
temp = ptr->link;
ptr->link = new;
new->link = temp;
}
ptr=ptr->link;
}
}
}

void insertatend()
{
struct node *ptr,*new;
int item;
if(start == NULL)
printf("\nlist is empty");
else
{
new = (struct node *)malloc(sizeof(struct node));
printf("\nenter the element to be inserted:");
scanf("%d",&item);
new->data = item;
ptr=start;
while(ptr!=NULL)
{
if(ptr->link == NULL)
{
ptr->link = new;
new->link = NULL;
}
ptr=ptr->link;
}
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

while(q != NULL)
{
printf("\t %d",q->data);
q=q->link;
}
}
}


void delfrombeg()
{
struct node *ptr;
if(start == NULL)
printf("\n list is empty");
else
{
ptr = start;
start = start->link;
printf("deleted element is %d",ptr->data);
free(ptr);
}
}

void delinbetween()
{
struct node *ptr,*prevnode;
int item;
if(start == NULL)
printf("list is empty");
else
{
printf("\n enter the element to be deleted");
scanf("%d",&item);
ptr=start;
while(ptr != NULL)
{

if(ptr->data == item)
{
prevnode->link = ptr->link;
printf("\n %d deleted",ptr->data);

free(ptr);
}
prevnode = ptr;
ptr = ptr->link;
}
}
}

void delfromlast()
{
struct node *ptr,*prevnode;
if(start == NULL)
printf("list is empty");
else
{
ptr = start;
while(ptr!=NULL)
{
if(ptr->link == NULL)
{
prevnode->link = NULL;
printf("%ddeleted",ptr->data);
free(ptr);
}
prevnode=ptr;
ptr = ptr->link;
}
}
}


