#include <stdio.h>
int main(void)
{
	int n;
	int array[10];
	int total = 0;
	double avg = 0;
	for(n=0 ; n < 10; n++)
	{
		printf("����[%d]-->",n);
		scanf("%d",array+n);
		total = total + array[n];
		
		
	}
	avg = (double)total / n;
	printf("\n����(%.1f)�ȏ�̃f�[�^\n",avg);
	for(n = 0;n < 10;n++)
	{
		if(array[n] >= avg)
		{
			printf("%d:%d\n",n,array[n]);
		}
	}
	
	return 0;
}