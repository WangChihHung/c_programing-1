#include <stdio.h>
int main(void)
{
	char moji[30];
	int n = 0;
	char prove;
	char change;
	
	printf("���������-->");
	scanf("%30s",moji);
	
	printf("��������-->");
	scanf(" %c",&prove);
	
	printf("�u������-->");
	scanf(" %c",&change);
	
	while(moji[n] != '\0')
	{
		if(moji[n] == prove)
		{
			moji[n] = change;
		}
		n++;	
	}
	printf("���ʕ�����:%s\n",moji);
	return 0;
}