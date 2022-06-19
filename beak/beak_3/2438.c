#include <stdio.h>

int main()
{
	int i,a;

	scanf("%d", &i);

	for (a=0;i>a;a++)
	{
		for(int b=0;a>=b;b++)
		{
			printf ("*");
		}
		printf("\n");
	}

	return 0;
}
