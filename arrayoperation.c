#include<stdio.h>
#include<stdlib.h>
void arrayinsert();
void largest();
void smallest();
void reverse();
void sum();
void mean();

#define N 5
int array[N];
void main()
{
int choice;
printf("\n enter the choice");
while(1)
{
printf("\n 1. array insertion \n 2. largest \n 3. Smallest \n 4.Reversing \n 5.sum \n 6.mean \n 7.exit\n ****first u have to do the insertion****");
scanf("%d",&choice);

switch(choice)
{
case 1:arrayinsert();
	break;
case 2 : largest();
	break;
case 3: smallest();
	break;
case 4: reverse();
	break;
case 5: sum();
	break;
case 6 : mean();
	break;
case 7: exit(1);
default:printf("\n wrong choice ");
}
}
}

void arrayinsert()
{
int i;
printf("\nenter the array elements of size %d",N);
for(i=0;i<N;++i)
{
scanf("%d",&array[i]);
}
printf("\n elements are inserted");
}

void largest()
{
int i;
for(i=0;i<N;++i)
{
if(array[0]<array[i])
{
array[0]=array[i];
}
}
printf("\n largest number in the array is %d",array[0]);
}



void smallest()
{
int i;
for(i=0;i<N;++i)
{
if(array[0]>array[i])
{
array[0]=array[i];
}
}

printf("\n smallest number in the array is %d",array[0]);
}

void reverse()
{
printf("\n reverse of the array is \n");
for(int i=N-1;i>=0;--i)
{
printf("%d",array[i]);
} 
}

void sum()
{
int sum=0,i;
for(i=0;i<N;i++)
{
sum=sum+array[i];
}
printf("\n sum of array elements is %d",sum);
}

void mean()
{
int sum=0,i;
float mean;
for(i=0;i<N;i++)
{
sum=sum+array[i];
}
mean = sum/N;
printf("\n mean of array elements is %f",mean);
}


