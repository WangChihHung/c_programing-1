#include <stdio.h>
int main(void)
{   int year;
	printf("年入力-->");
	scanf("%d",&year);
	if(year % 4 == 0 )
	{
	    if(year % 100 != 0 || year % 400 == 0)
		{
			printf("結果:閏年");
		}
		else
		{
			printf("結果:閏年");
		}
	}
	else
	{
		printf("結果:平年");
	}
	
	return 0;
}