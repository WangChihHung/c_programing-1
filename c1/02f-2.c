#include <stdio.h>
int main(void)
{   int year;
	printf("�N����-->");
	scanf("%d",&year);
	if(year % 4 == 0 )
	{
	    if(year % 100 != 0 || year % 400 == 0)
		{
			printf("����:�[�N");
		}
		else
		{
			printf("����:�[�N");
		}
	}
	else
	{
		printf("����:���N");
	}
	
	return 0;
}