//find the biggest of 2 numbers using function return

#include<stdio.h>
int biggestoftwo(int,int);
void main()
{
int num1,num2,bigger;
printf("enter the 2 numbers ");
scanf("%d%d",&num1,&num2);
bigger=biggestoftwo(num1,num2);
printf("biggest number is %d",bigger);
}

int biggestoftwo(int x,int y)
{

if(x<y)
{
return y;
}
else if(x==y){
return 0;
}
else{
return x;
}
}
