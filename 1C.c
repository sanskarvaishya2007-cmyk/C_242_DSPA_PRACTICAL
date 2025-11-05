#include<stdio.h>
#include<string.h>
struct student
{
	char name[50];
	int year;
	char section;
	float avg;
};
int main()
{
struct student s[100],temp;
int i,j,n;
printf("enter no. of student: ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
	printf("\n enter student details %d:\n",i+1);
	printf("enter name: ");
	scanf(" %s",s[i].name);
	printf("enter year: ");
	scanf("%d",&s[i].year);
	printf("enter section: ");
	scanf(" %c",&s[i].section);
	printf("enter Average Marks: ");
	scanf("%f",&s[i].avg);
}
for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(s[i].avg<s[j].avg)
		{
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
			
		}
	}
}
printf("\nstudent sorted by avg marks\n");
printf("Name\nYear\nBranch\nAverage Marks\n");
for(i=0;i<n;i++)
{
	printf("\n%s\n%d\n%c\n%f\n",s[i].name,s[i].year,s[i].section,s[i].avg);
}

	return 0;
}