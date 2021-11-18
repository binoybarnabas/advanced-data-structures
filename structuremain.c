#include<stdio.h>

struct company
{
int id;
char name[25];
float pa,ta,salary,hra;
float gp;
};


void main()
{

float sum=0;
struct company s[100];
float *ptr;
float gp_here[100];

for(int i=0;i<3;i++)
{

printf("enter the %d id ",i+1);
scanf("%d",&s[i].id);
printf("enter the %d name",i+1);
scanf("%s",s[i].name);
printf("enter the %d pa,ta,salary,hra",i+1);
scanf("%f%f%f%f",&s[i].pa,&s[i].ta,&s[i].salary,&s[i].hra);

s[i].gp = s[i].salary + (s[i].pa + s[i].ta + s[i].hra)/3;
gp_here[i] = s[i].gp;

}


ptr = &gp_here[0];
for(int i=0;i<3;i++)
{
sum = sum + *ptr;
++ptr;
}

printf("the sum of the gp is %f",sum);
}
