#include <stdio.h>
int main(void)
{   
    int ten;
	printf("�_������-->");
	scanf("%d",&ten);
	if(ten < 0 )
	{
		printf("�_�����̓G���[(0����)�ł�\n");
	}
	else if(ten > 100)
	{
		printf("�_�����̓G���[(100�𒴂���)�ł�\n");
	}
	else if(ten < 60)
	{
		printf("�s���i�ł�\n");
	}
	else
	{
		printf("���i�ł�\n");
	}
	return 0;
}