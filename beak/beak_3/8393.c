#include <stdio.h>

int main ()
{
	int n;
	int i;
	
	scanf("%d",&n);
	

	while (n!=0)
	{
		i += n;
		n--;
	}

	printf("%d",i);

	return 0;
}
