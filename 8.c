//find the biggest of 3 numbers

#include<stdio.h>

void main()
{
int num1,num2,num3;
printf("enter the 3 numbers ");
scanf("%d%d%d",&num1,&num2,&num3);

if(num1>num3)
{
if(num1>num2){
printf("%d is greater",num1);
}
}

else if(num2>num1)
{
if(num2>num3)
{
printf("%d is greater",num2);
}
}

else
{
printf("%d is greater",num3);
}

}


