#include <stdio.h>

int main ()
{
	int a,b;

	scanf("%d",&a);

	for (b=0;b<a;b++)
	{
		printf("%d\n",a-b);
	}

	return 0;
}
