#include <stdio.h>
int main(void)
{	
	int num = 0;
	int total = 0;
	int array[5];
	while(num < 5)
	{
		printf("��������-->");
		scanf("%d",array+num);
		total = total + *(array + num);
		num++;
	}
	printf("���v:%d\n",total);
	printf("����:%d %d %d %d %d\n",array[0],array[1],array[2],array[3],array[4]);
	
	return 0;
}
