#include <stdio.h>
int main(void)
{
	int i = 1;
	int num;
	int ten;
	int total = 0;
	double ave;
	do
	{
		num = i;
		printf("%d�l�ړ_������-->",num);
		scanf("%d",&ten);
		if(ten > 100 || ten < 0)
		{
			continue;
		}
		i++;
		total = total + ten;
	}
	while(i <= 5);
	ave = (double)total / num ;
	printf("����:%.1f",ave);
	return 0;
}