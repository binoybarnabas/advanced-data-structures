#include<stdio.h>
struct stud
{
int rollno;
int age;
float phy,chem;
char name[25];
};

void main()
{
struct stud st;
printf("\n enter the name of the student");
scanf("%s",st.name);

printf("\n enter the roll no of the student");
scanf("%d",&st.rollno);

printf("\n enter the age of the student");
scanf("%d",&st.age);

printf("\nenter the marks of chem and phy of the student");
scanf("%f%f",&st.chem,&st.phy);

printf("\n**********student details are**************");
printf("\n name of the student is %s",st.name);
printf("\n roll no of the student is %d",st.rollno);
printf("\n marks of chem  and phy of the student is %f and %f",st.chem,st.phy);
printf("\n age of the student is %d",st.age);



}

