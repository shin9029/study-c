#include <stdio.h>

int main ()
{
	int t,a,b;
	int x=1;

	scanf("%d",&t);

	for (t=t;t>0;t--)
	{
		scanf ("%d %d\n",&a, &b);

		printf("Case #%d: %d + %d = %d\n",x,a,b,a+b);

		x++;
	}

	return 0;
}
