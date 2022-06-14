#include <stdio.h> 

int main() 
{
	int a=23;
	if (a>=20)
	{
		printf ("성인요금: 10000원");
	}
	else if (a<14)
	{
		printf ("어린이 요금: 5000원");
	}
	else
	{
		printf ("청소년 요금: 7000원");
	}
	return 0; 
}
