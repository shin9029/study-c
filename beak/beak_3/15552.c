#include <stdio.h>

int main ()
{
	int t,a,b;

	scanf("%d",&t);

	for (t=t;t>0;t--)
	{
		scanf ("%d %d\n",&a, &b);

		printf("%d\n",a+b);
	}

	return 0;
}
