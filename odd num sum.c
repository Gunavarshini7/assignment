#include<stdio.h>
int main()
{
	int n,i,j=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i%2!=0)
		{
			j=j+i;
		}
	}
	printf("the sum of the odd num is:%d",j);
}
