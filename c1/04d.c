#include <stdio.h>
int main(void)
{
	int num;
	int ten;
	int count = 0;
	int total = 0;
	int modori;
	double avg;
	int maxn,maxt;
	int minn,mint;
	
	printf("�ԍ�,���_-->");
	modori = scanf("%d,%d",&num,&ten);
	maxt = mint = ten;
	maxn = minn = num;
	
	while(modori != EOF)
	{
		if(maxt <= ten)
		{
			maxt = ten;
			maxn = num;
		}
		if(mint >= ten)
		{
			mint = ten;
			minn = num;
		}
		total = total + ten;
		count++;
		printf("�ԍ�,���_-->");
 		modori = scanf("%d,%d",&num,&ten);
		
	}

		avg = (double)total/count;
		printf("���ϓ_:%.1f\n",avg);
		printf("�ō��_ �ԍ�:%d ���_:%d\n",maxn,maxt);
		printf("�Œ�_ �ԍ�:%d ���_:%d\n",minn,mint);
		
	return 0;
}