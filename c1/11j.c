#include <stdio.h>
void CurrencyEdit(int price,char *edit);
int main(void)
{
	int tanka;
	int vol;
	int price;
	char en[10];
	
	printf("�P��,����-->");
	scanf("%d,%d",&tanka,&vol);
	price = tanka * vol;
	CurrencyEdit(price,en);
	printf("���v���z:%s",en);
	return 0;
}

/*�߂�l:�Ȃ�*/
/*����1:�ҏW���鐔�l*/
/*����2:�ҏW��̕������ݒ肷��A�h���X*/

void CurrencyEdit(int price,char *edit)
{
	int num = 1;
	int i = 1;
	int i2 ;
	int keta;
	int price2;
	price2 = price;
	while(keta > 9)
	{
		price2 = price2 /10;
		num = num * 10;
		keta++;
	}
	
	*edit = '\\';
	while(price > 0)
	{
		*(edit+i) = price /num  + '0';
		price = price % num;
		num = num / 10;
		if(i == keta % 3 && keta / 3 != 0)
		{
			i++;
			*(edit+i) = ',';
		}
		i++;
		
	}
}