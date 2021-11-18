#include<stdio.h>
void main()
{
int a[100][100],r,c,i,j,sum=0;

printf("enter the number fo rows and colums");
scanf("%d%d",&r,&c);

printf("enter the array elements for %d X %d array",r,c);
for(i=0;i<r;++i)
{
for(j=0;j<c;++j)
{
scanf("%d",&a[i][j]);
}
}

printf("enter the array elements for %d X %d are",r,c);
for(i=0;i<r;++i)
{
printf("\n");
for(j=0;j<c;++j)
{
printf("%d",a[i][j]);
}
}

for(i=0;i<r;++i)
{
printf("\n");
for(j=0;j<c;++j)
{
sum = sum + a[i][j];
}
}

printf("sum = %d",sum);



}
