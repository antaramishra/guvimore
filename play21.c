#include<stdio.h>
void main()
{
	int x1,y1,x2,y2,x3,y3,a;
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	a=(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;
	if(a==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
