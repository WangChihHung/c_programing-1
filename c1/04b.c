#include <stdio.h>
int main(void)
{
	int i;
	int max;
	scanf("%d",&i);
	max = i;
	while(i >= 0)
	{
		printf("��������-->");
		scanf("%d",&i);
		
		if(max < i)
		{
			max = i;
		}
	}
	printf("�ő�l:%d\n",max);
	
return 0;
}