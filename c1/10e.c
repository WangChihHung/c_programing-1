#include <stdio.h>
int main(void)
{
	int array[10];
	int goukei = 0;
	int i;
	int cnt = 0;
	int *pa;
	double heikin;
	
	pa = array;
	for(i = 0;i<10;i++)
	{
		printf("��������[%d]",i);
		scanf("%d",pa+i);
		goukei = goukei + *(pa+i);
	}

	heikin = (double)goukei / i;
	printf("����:%.1f\n",heikin);
	for(i = 0;i<10;i++)
	{
		if(*(pa+i) < heikin)
		{
			printf("[%d]:%d\n",i,*(pa+i));
			cnt++;
		}
		
	}
	printf("����%d\n",cnt);
	
	return 0;
}