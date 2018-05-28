#include<stdio.h>
int lcm(int,int);
int gcd(int,int);
void main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	lcm(x,y);
}
int gcd(int m,int n)
{
	if(m==n)
	{
		return m;
	}
	else if(m>n)
	{
		return(gcd(m-n,n));
	}
	else
	{
		return(gcd(m,n-m));
	}
}
int lcm(int m,int n)
{
	int x=(m*n)/gcd(m,n);
	printf("%d",x);
}
