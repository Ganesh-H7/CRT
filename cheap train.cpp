#include<stdio.h>
int main()
{
	int n,sp,st,spt;
	scanf("%d %d %d %d",&n,&sp,&st,&spt);
	int x=n*st;
	int y=((n/sp)*spt)+sp;
	if(x>y)
	{
		printf("%d",y);
	}
	else
	{
		printf("%",x);
	}
	return 0;
}
