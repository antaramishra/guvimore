#include<stdio.h>
#include<string.h>
void main()
{
	char a[50];
	int c=0,i;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
				c++;
		}
	}
	if(c==strlen(a))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
