#include <stdio.h>
#include <string.h>

int main(void)
{
	char moji[30];
	char prove[30];
	int n;
	int p;
	printf("���������-->");
	scanf(" %30s",moji);
	
	printf("��������-->");
	scanf(" %30s",prove);
	
	p = strlen(prove);
	
	for(n = 0; n < 30 - p;n++)
	{
		if(!strncmp(prove,moji+n,p))
		{
			printf("��v�ꏊ:%d\n",n);	
		}
		
	}
	
	return 0;
}