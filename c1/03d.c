#include <stdio.h>
int main()
{	
	int i,j;
	int total= 0;
	for(i = 0;i < 5;i++)
	{
		printf("��������-->");
		scanf("%d",&j);
		total = total + j;
	}
	printf("���v:%d\n",total);
	printf("����:%3.1f\n",(double)total/i);
	return 0;
}