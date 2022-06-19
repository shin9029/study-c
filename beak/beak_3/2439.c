#include <stdio.h>

int main()
{
	int i,a;
	int c;

	c=i-1;
	scanf("%d", &i);

	for (a=0;i>a;a++)
	{	
		for (c=1;(i-a)>c;c++)
		{
			printf(" ");
		}

		for(int b=0;a>=b;b++)
		{	
			printf ("*");
		}
		printf("\n");
	}

	return 0;
}
