#include <stdio.h>
void CurrencyEdit(int prince,char *edit);
int main(void)
{
	int cost;
	int num;
	char money[20];
	int total = 0;
	
	printf("�P��,����-->");
	scanf("%d,%d",&cost,&num);
	while(cost > 0 && num > 0)
	{
		CurrencyEdit(cost*num,money);
		printf("���z:%s\n",money);
		total = total + cost*num;
		printf("�P��,����-->");
		scanf("%d,%d",&cost,&num);
	}
	CurrencyEdit(total,money);
	printf("���v���z:%s\n",money);
	return 0;
}

/* ����1:�ҏW���鐔�l*/
/* ����2:�ώ��̕������ݒ肷��A�h���X*/
void CurrencyEdit(int price,char *edit)
{
	int keta = 0;
	int i = 1;
	int num;
	int prove = 1;
	
	/* price�̌��𐔂��Ă��܂� */
	while(price / prove > 0) 
	{
		prove = prove*10;
		keta++;
	}
	
	/* �ŏ��̃J���}�̈ʒu�܂�edit�ɐ����������Ă��܂� */
	*edit = '\\';
	while(keta % 3 > 0)
	{
		prove = prove/10;
		*(edit+i) = price / prove +'0';
		price = price % prove;
		keta--;
		i++;
	}
	/* �ŏ���edit�ɃJ���}�����A�Ȍ��3�����������閈�ɃJ���}�����Ă��܂� */
	while(keta > 0)
	{
		if(i != 1)
		{
			*(edit+i) = ',';
			i++;
		}
		num = 0;
		while(keta > 0&&num <3)
		{
			prove = prove/10;
			*(edit+i) = price / prove +'0';
			price = price % prove;
			keta--;
			i++;
			num++;
		}
	}
	*(edit+i) = '\0';
}