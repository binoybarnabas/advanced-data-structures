#include<stdio.h>
void main()
{
int i,a[500],n,sum=0,sumeven=0,big;
//printf("%d%d",i,n);
printf("enter the size of the array \n");
scanf("%d",&n);
printf("enter the %d elements in the array\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("array elements are \n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}


big = a[0];

for(i=0;i<n;i++)
{
if(big < a[i+1])
{
big = a[i+1];
}

}

printf("biggest is %d",big);
}

/*

for(i=0;i<n;i++)
{
sum = sum+a[i];
if(a[i]%2 == 0)
{
sumeven = sumeven+a[i];
printf("\n %d",a[i]);
}
}
printf("sum of elements in array is %d",sum);
printf("sum of even elements in array is %d",sumeven);
}

*/
