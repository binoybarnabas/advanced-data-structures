
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *front = NULL;
struct node *rear = NULL;

void insert();
void delete();
void display();

void main()

{
    int choice;
    while(1)
    {
        printf("\n enter your choice:");
        printf("\n 1.insert \n 2.delete \n 3.display \n 4.exit");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();
                break;
            case 2:delete();
                break;
            case 3:display();
                break;
            case 4:exit(1);
            default:printf("\n invalid choice");
        }
    }
}

void insert()
{
    int item;
    struct node *temp;
    temp  = (struct node *)malloc(sizeof(struct node));
    if(temp == NULL)
    {
    printf("\n memory not available");
    }
    else{
    printf("\n enter the element to be inserted into the queue : ");
    scanf("%d",&item);
    temp->info = item;
    temp->link=NULL;
    
    if(front == NULL)
    {
        front = temp;
    }
    else{
        rear->link = temp;
    }
    rear = temp;
    }
}


void delete()
{
    struct node *temp;
    if(front == NULL){
        printf("\n queue underflow");
    }
    else
    {
        temp = front;
        front = front->link;
        printf("\n deleted element is  %d",temp->info);
        free(temp);
        
    }
}

void display(){
    struct node *ptr;
    ptr = front;
    if(front == NULL)
    {
        printf("\n queue is empty");
       
    }
    else
    {
        printf("\nqueue elements are :");
        while(ptr!=NULL)
        {
            printf("%d \n",ptr->info);
            ptr=ptr->link;
        }
    }
  
}
