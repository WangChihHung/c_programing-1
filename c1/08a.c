#include <stdio.h>
int main(void)
{
	int n = 0;
	char moji[20];
	
	printf("��������-->");
	
	scanf("%20s",moji);
	
	while(moji[n] != '\0')
	{
		n++;
		
	}
	
	printf("������:%d\n",n);
	
	return 0;
}
