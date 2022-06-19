#include <stdio.h>

int main()
{
	int n;
	int a,b,c,d;
	int sum;
	int	count=1;
	
	scanf("%d",&n);

	sum=n;

	a=sum/10;
	b=sum%10;
	c=(a+b)%10;
	sum=(b*10)+c;
	if (n!=0)
	{
		do
		{	
			a=sum/10;
			b=sum%10;
			c=(a+b)%10;
			sum=(b*10)+c;
		

			count=count+1;

	}while(sum!=n);
	}

	printf("%d",count);

}
