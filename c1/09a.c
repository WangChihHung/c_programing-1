#include <stdio.h>
#include <string.h>

int main(void)
{
	char m1[20];
	char m2[10];
	
	printf("�ϐ�m1����-->");
	scanf(" %s",m1);
	
	printf("�ϐ�m2����-->");
	scanf(" %s",m2);
	
	strcat(m1,m2);
	
	printf("����m1:%s\n",m1);
	
	return 0;
}