#include <stdio.h>

int main()
{
	int n,x,t;

	scanf("%d%d",&n,&x);

	for (n=n;n>0;n--)
	{
		scanf("%d",&t);
		if(t<x)
		{
			printf("%d ",t);
		}
	}
}
