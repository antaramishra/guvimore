#include<stdio.h>
void main()
{
	int a[50],n,i;
	int result;
	printf("enter size of array : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	result=a[0];
	for(i=1;i<n;i++)
	{
		result=result ^ a[i];
	}
	printf("%d",result);
}
