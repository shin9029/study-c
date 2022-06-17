#include <stdio.h>

int main()
{
	int a,b;

		scanf("%d %d",&a,&b);

		if ((b<45) && (a >=1))
		{
			b=b+15;
			a=a-1;
			
			printf("%d %d",a,b);
		}
		else if ((b<45) && (a<1))
		{	
			b=b+15;
			a=23;

			printf("%d %d",a,b);
		}
		else
			printf("%d %d",a,b-45);

		return 0;
}
