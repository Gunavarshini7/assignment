#include<stdio.h>
struct books{
	char b_name[50],author[50];
	int price[40];
}bts[5];
int main()
{
	int i,j;
	printf("enter num of rows");
	scanf("%d",&j);
	printf("enter\n1.book name\n2.author\n3.price\n");
	for(i=0;i<j;i++)
	{
		scanf("%s%s%d",&bts[i].b_name,&bts[i].author,&bts[i].price);
	}
	printf("b_name  author  price");
	for(i=0;i<j;i++)
	{
		printf("\n%s\t%s\t%d",bts[i].b_name,bts[i].author,bts[i].price);
	}
}