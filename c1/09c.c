#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char moji[30];
	int n;
	int su = 0;
	int hoka = 0;
	
	printf("���������-->");
	scanf("%30s",moji);
	
	for(n = 0; moji[n] != '\0';n++)
	{
		if(isdigit(moji[n]))
		{
			su++;
		}
		else
		{
			hoka++;
		}
	}
	printf("����:%d\n",su);
	printf("���̑�:%d\n",hoka);
	return 0;
}