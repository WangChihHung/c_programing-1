#include <stdio.h>

int main(void)
{   int year;
    
	printf("�N����-->");
	
	scanf("%d",&year);
	if(year % 4 != 0 )
	{
		printf("����:���N\n");
	}
	else if( year % 100 == 0 )
	{
		if(year % 400 == 0)
		{
			printf("����:�[�N\n");
		}
		else
		{
			printf("����:���N\n");
		}
	}
	else
	{
		printf("����:�[�N\n");
	}
	
	return 0;
}