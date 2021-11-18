//find the biggest of 2 numbers using function

#include<stdio.h>
void biggestoftwo(int,int);
void main()
{
int num1,num2;
printf("enter the 2 numbers ");
scanf("%d%d",&num1,&num2);
biggestoftwo(num1,num2);
}

void biggestoftwo(int x,int y)
{

if(x<y)
{
printf("%d is greater than %d",y,x);
}
else if(x==y){
printf("both are same");
}
else{
printf("%d is greater than %d",x,y);
}
}
