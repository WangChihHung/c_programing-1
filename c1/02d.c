#include <stdio.h>
int main(void)
{
	int moon;
	printf("�������-->");
	scanf("%d",&moon);
	if(moon > 12 || moon < 0)
	{
		printf("���̓��̓G���[");
	}
	else if(moon >= 3 && moon <= 5)
	{
		printf("����:�G�߂͏t\n");
	}
	else if(moon >= 6 && moon <= 8)
	{
		printf("����:�G�߂͉�\n");
	}
	else if(moon >= 9 && moon <= 11)
	{
		printf("����:�G�߂͏H\n");
	}
	else
	{
		printf("����:�G�߂͓~\n");
	}
	return 0;
}