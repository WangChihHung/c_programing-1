#include <stdio.h>
int main(void)
{
	int dat[8];
	int n;
	int i;
	int total = 0;
	int min;
	double ave;
	for(n = 0; n < 8; n++)
	{
		printf("���l[%d]-->",n);
		scanf("%d",dat+n);
		total = total + dat[n];
	}
	ave = (double)total / n;
	
	min = dat[0];
	
	for(n = 1;n < 8; n++)
	{
		 
		 if((ave - min)*(ave - min) > ((ave - dat[n]) * (ave - dat[n])))
		{
			min = dat[n];
			i = n;
		}
		
	}
	printf("����:%.1f\n",ave);
	printf("����	�v�f�ԍ�:%d\n",i);
	printf("		�f�[�^:%d\n",min);
	return 0;
}