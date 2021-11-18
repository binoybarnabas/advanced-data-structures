#include<stdio.h>

void main()
{
int *p,*q,*s;
*p = 10;
*q = 20;
*s = *p+*q;
printf("%d sum ",*s);
}
