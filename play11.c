#include<stdio.h>
#include<string.h>
void main()
{
	char a[20];
	gets(a);
	if(a[0]=='S' || a[0]=='s')
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
