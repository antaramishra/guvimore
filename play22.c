#include<stdio.h>
int gcd(int,int);
void main()
{
	int x,y,z;
	scanf("%d%d",&x,&y);
	z=gcd(x,y);
	printf("%d",z);
}
int gcd(int x,int y)
{
	if(x<y)
	{
		return(gcd(y-x,x));
	}
	if(x>y)
	{
		return(gcd(x-y,y));
	}
	if(x==y)
	{
		return(x);
	}
	if(x==0 || y==0)
	{
		return(0);
	}
}
