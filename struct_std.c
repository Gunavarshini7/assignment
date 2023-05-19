#include<stdio.h>
struct student{
	char std_name[50],place[50];
	int age[40];
}bts[5];
int main()
{
	int i,j;
	printf("enter num of rows");
	scanf("%d",&j);
	printf("enter\n1.student name\n2.place\n3.age\n");
	for(i=0;i<j;i++)
	{
		scanf("%s%s%d",&bts[i].std_name,&bts[i].place,&bts[i].age);
	}
	printf("std_name  place  age");
	for(i=0;i<j;i++)
	{
		printf("\n%s\t%s\t%d",bts[i].std_name,bts[i].place,bts[i].age);
	}
}