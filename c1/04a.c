#include <stdio.h>
int main(void)
{
	int i = 0;
	int total = 0;
	double ave = 0;
	int ten;
	printf("��������-->");
	scanf("%d",&ten);
	while(ten >= 0)
	{
		total = total +ten;
		i = i +1;
		printf("��������-->");
		scanf("%d",&ten);
	    
	}
	if(i != 0)
	{
		ave = (double)total / i;
	}
	printf("���v:%d ����:%d ����:%.1f\n",total,i,ave);
	return 0;
}