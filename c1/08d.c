#include <stdio.h>
int main(void)
{
	char m1[30];
	char m2[30];
	char del;
	int n;
	int i = 0;
	
	printf("���������-->");
	scanf("%s",m1);
	
	printf("�폜����-->");
	scanf(" %c",&del);
	
	for(n = 0; m1[n] != '\0'; n++)
	{
		if(m1[n] != del)
		{
			m2[i] = m1[n];
			i++;
		}
	}
	m2[i] = '\0';
	printf("���ʕ�����(m2):%s\n",m2);
	return 0;
}