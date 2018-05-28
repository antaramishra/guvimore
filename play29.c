#include<stdio.h>
#include<math.h>
void main()
{
	int n,x,y,i,j,c=0;
	scanf("%d%d",&x,&y);
	for(i=x;i<=y;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i==j*j)
			{
				c++;
			}
		}
	}
	printf("%d",c);
}
