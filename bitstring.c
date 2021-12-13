#include<stdio.h>
#include<stdlib.h>
int u[10]={1,2,3,4,5,6,7,8,9},set1[10],set2[10];
unsigned short int bitstring1[9],bitstring2[9];

void create();
void unionofset();
void intersectionofset();
void setdifference();
void main()

{
int choice;
while(1)
{
printf("\n 0.create 2 sets\n 1.union\n 2.intersection\n 3.set difference\n 4.exit");
scanf("%d",&choice);
switch(choice)
{
case 0:create();
	break;
case 1:unionofset();
	break;
case 2 :intersectionofset();
	break;
case 3:setdifference();
	break;
case 4:exit(0);
default:printf("enter a valid choice");
}
}
}

void create()
{
int n1,n2;
printf("\n enter the size of first set less than 10:");
scanf("%d",&n1);
printf("\n enter the size of second set less than 10:");
scanf("%d",&n2);

printf("\n insert first set ");
for(int i=0;i<n1;++i)
{
scanf("%d",&set1[i]);
}


printf("\n insert second set ");
for(int i=0;i<n2;++i)
{
scanf("%d",&set2[i]);
}


for(int i=0;i<9;++i)
{
bitstring1[i]=0;
for(int j=0;j<n1;++j)
{
if(u[i] == set1[j])
{
bitstring1[i]=1;
}
}
}

for(int i=0;i<9;++i)
{
bitstring2[i]=0;
for(int j=0;j<n1;++j)
{
if(u[i] == set2[j])
{
bitstring2[i]=1;
}
}
}


printf("\n bit string1:");
for(int i=0;i<9;++i)
{
printf("\n%d ",bitstring1[i]);
}

printf("\n bit string1:");
for(int i=0;i<9;++i)
{
printf("\n%d ",bitstring2[i]);
}

}


void unionofset()
{
printf("union of set:");
for(int i=0;i<9;++i)
{
if(bitstring1[i]|bitstring2[i] == 1)
{
printf("%d",u[i]);
}
}
}

void intersectionofset()
{
printf("intersection of set:");
for(int i=0;i<9;++i)
{
if(bitstring1[i]&bitstring2[i] == 1)
{
printf("%d",u[i]);
}
}
}

void setdifference()
{
printf("set difference");
for(int i=0;i<9;++i)
{
if(bitstring2[i]&bitstring2[i] == 1)
{
continue;
}
printf("%d",u[i]);
}
}
