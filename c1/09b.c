#include <stdio.h>
#include <string.h>

int main(void)
{
	char m1[20];
	char m2[20];
	
	printf("������1����-->");
	scanf(" %20s",m1);
	
	printf("������2����-->");
	scanf(" %20s",m2);
	
	if(!strcmp(m1,m2))
	{
		printf("2�̕�����͓����ł�\n");
	}
	else
	{
		printf("2�̕�����͈Ⴂ�܂�\n");
		
	}
	
	return 0;
}