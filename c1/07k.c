#include <stdio.h>
#include <string.h>

void soto(int *array,int n);

int main(void)
{
	int array[20];
	int num=0;
	int ret;
	printf("***CTL+Zが押されるまで数値を入力できます***\n");
	printf("数値[%d]-->",num);
	ret = scanf("%d",array+num);
	
	while(ret != EOF && num < 20)
	{
		num++;
		printf("数値[%d]-->",num);
		ret = scanf("%d",array+num);
	}
	soto(array,num);
	return 0;
}

void soto(int *array,int n)
{
	int pivot = *array;
	while(n > 0)
	{
		
	}
	soto(array,pivot)
}