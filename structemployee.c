#include<stdio.h>
struct employee{
	char name[60],position[30];
	int age[3];
}emp[50];
int main()
{
	int i,a;
	printf("enter num of rows");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%s%s%d\n",&emp[i].name,&emp[i].position,&emp[i].age);
	}
	printf("emp_name  designation  age\n");
	for(i=0;i<a;i++)
	{
		printf("%s \t %s \t %d\n",emp[i].name,emp[i].position,emp[i].age);
	}
}