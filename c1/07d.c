#include <stdio.h>
int main()
{
	int num = 0;
	int array[10];
	int ans;
	while(num < 10)
	{
			
		printf("整数[%d]-->",num);
		scanf("%d",&array[num]);
		num++;
	}
	num = 0;
	printf("\n負の値の一覧-->\n");
	while(num < 10)
	{
		
		if(array[num] < 0)
		{
			printf("%d ",array[num]);
		}
		num++;
	}
	
	return 0;
}