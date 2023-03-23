#include <stdio.h>
#include <string.h>
 
int main()
{
  	char s[50],r;
  	int i,j,max=-1,f[50]={0}; 
  	printf("Enter any String :");
  	scanf("%s",s);
  	j= strlen(s);
  	for(i=0;i<j;i++)
  	{
  		f[s[i]]++;
	}	
  	for(i=0;i<j;i++)
  	{
		if(max<f[s[i]])
		{
			max=f[s[i]];
			r= s[i];
		}
	}
	printf("The Maximum Occurring Character in a Given String = %c ", r);
}
