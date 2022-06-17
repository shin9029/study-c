#include <stdio.h>

int main ()
{
	int h,m,t;

	scanf("%d %d", &h, &m);
	scanf("%d", &t);

	h=h+((m+t)/60);
	m=(m+t)%60;
	


	if (h>23)
	{	
		if(h==24)
		{

			printf("%d %d",h%24, m);
		}
		else
			printf("%d %d",h%24,m);
	}
	else
		printf("%d %d",h, m);

	return 0;
}
