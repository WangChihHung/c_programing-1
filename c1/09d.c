#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char moji[30];
	char eimoji[30];
	char tamoji[30];
	int n;
	int i = 0;
	int g = 0;
	
	printf("���������-->");
	scanf("%30s",moji);
	
	for(n = 0; moji[n];n++) /* ������moji[n] != '\0' �Ɠ���*/
	{
		if(isalpha(moji[n]))
		{
			eimoji[i] = moji[n];
			i++;
		}
		else
		{
			tamoji[g] = moji[n];
			g++;
		}
	}
	eimoji[i] = tamoji[g] = NULL;
	
	printf("�p��:%s\n",eimoji);
	printf("���̑�:%s\n",tamoji);
	
	return 0;
}