#include<stdio.h>
#include<string.h>
void main()
{
	char a[50];
	int c=0,i;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i]=a[i]-32;
		}
		else if(a[i]>='A' && a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
	}
	puts(a);
}
