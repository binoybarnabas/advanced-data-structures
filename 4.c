//print odd numbers from one to n using do while loop
#include<stdio.h>
void main()
{
int i=1,n;
printf("enter the valued of n");
scanf("%d",&n);
do
{
if(i%2 == 1){
printf("\n%d",i);
}
++i;
}while(i<=n);

}
