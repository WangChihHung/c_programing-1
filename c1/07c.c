#include <stdio.h>
int main(void)
{	
	int num = 0;
	int total = 0;
	int array[5];
	while(num < 5)
	{
		printf("整数入力-->");
		scanf("%d",array+num);
		total = total + *(array + num);
		num++;
	}
	printf("合計:%d\n",total);
	printf("結果:%d %d %d %d %d\n",array[0],array[1],array[2],array[3],array[4]);
	
	return 0;
}
