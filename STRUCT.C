#include<stdio.h>
struct Student
{
char name[20];
int rollno;
float marks;
char city[20];
char dream[20];
};
void readstudent(struct Student s[10],int n)
{
int i;
for(i=0,i<n,i++)
{
printf("enter the Name:);
scanf("%s",s[i].name);
printf("enter the Roll:);
scanf("%d",s[i].roll);
printf("enter the Marks:);
scanf("%f",s[i].marks);
printf("enter the City:");
scanf("%s",s[i].city);
printf("enter the Dream:");
scanf("%s",s[i].dream);
};
void displaystudent(struct Student S[10],int n);
{
int i;
for(i=0,i<n,i++);
{
printf("\n ___-student%d details____\n",i+1);
printf("Name:%s",s[i].name);
printf("Roll:%d",s[i].roll);
printf("Marks:%f",s[i].marks);
printf("City:%s",s[i].city);
printf("Dream:%s",s[i].dream);
}
int main()
{
struct Student s[10];
int n;
printf("Enter the no of students");
scanf("%d",&n);
readstudent(s,n);
displaystudent(s,n);
return 0;
}





