#include<stdio.h>
#include<string.h>
void main()
{
	char a[50];
	int i;
	gets(a);
	int l=strlen(a);
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]>=65 && a[i]<=90)||(a[i]>=97 && a[i]<=122))
		{
			printf("no");
		}
		else
		{
			printf("yes");
		}
	}
}

