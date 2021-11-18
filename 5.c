//find the area of a rectangle using function

#include<stdio.h>
void arearect(int,int);
void main()
{
int length,breadth;
printf("enter the length and breadth ");
scanf("%d%d",&length,&breadth);
arearect(length,breadth);
}

void arearect(int x,int y)
{
int area;
area = x*y;
printf("area of the rectangle with length %d and breadth %d is %d",x,y,area);
}
