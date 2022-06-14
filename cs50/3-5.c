#include <stdio.h> 

int main(void) 
{
	int dan=3;
	int i;

	for (i=1;i<=9;i++)
	{
		printf ("%d * %d = %d",dan,i,dan*i);
		printf ("\n");
	}
	return 0; 
}
