#include <stdio.h>

int main()
{
	int a,b,n;

	do 
	{
		scanf("%d%d",&a,&b);

		n=a+b;

		if (n!=0)
		{
			printf("%d\n",n);
		}
	}while (n!=0);


}

