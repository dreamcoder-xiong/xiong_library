#include<stdio.h>

struct student
{
	int xuehao[5];
	char name[10];
	int grade1;
	int grade2;
	int grade3;
};

int main()
{
	int n;
	scanf("%d",&n);
	struct student students[n];
	for(int i=0;i<n;i++)
	{
		scanf("%s",&students[i].xuehao);
		scanf("%s",&students[i].name);
		scanf("%d",&students[i].grade1);
		scanf("%d",&students[i].grade2);
		scanf("%d",&students[i].grade3);
	}
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(students[i].grade1+students[i].grade2+students[i].grade3>max)
		{
			max=students[i].grade1+students[i].grade2+students[i].grade3;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(students[i].grade1+students[i].grade2+students[i].grade3==max)
		{
			printf("%s %s %d",students[i].name,students[i].xuehao,max);
		}
	}
	
}