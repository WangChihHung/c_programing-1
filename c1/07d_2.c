#include <stdio.h>
int main(void)
{
	int num1 = 0;
	int num2 = 0;
	int array1[10];
	int array2[10];   /* ���ʂȔz���p�ӂ������Ȃ��ꍇ�͂ǂ�����΂����ł��H */
	while(num1 < 10)
	{
		printf("����[%d]-->",num1);
		scanf("%d",&array1[num1]);
		if(array1[num1] < 0)
		{
			*(array2+num2) = array1[num1]; /* -�̒l�̔z��1�̗v�f��V�����p�ӂ����z��2�ɓ���Ă��� */ 
			num2++; 
		}
		num1++;
	}
	
	printf("\n���̒l�̈ꗗ\n");
	num1 = 0;                             /* �l�������ꂽ�z��2�̗v�f�܂ł�\�� */
	
	while(num1 < num2)
	{
		printf("%d ",array2[num1]);
		num1++;
	}
	return 0;
}