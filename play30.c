#include<stdio.h>
#include<string.h>
void main()
{
	char a[50],b[50];
	int c=0,i=0,j=0,k;
	gets(a);
	gets(b);
	scanf("%d",&k);
	while(a[i]!='\0' && b[j]!='\0')
	{
		if(a[i++]==b[j++])
		{
			c++;
		}
	}
	if(k==c)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
