#include <stdio.h>
int main(void)
{
	int a,b;
	printf("aさんの得点-->");
	scanf("%d",&a);
	printf("bさんの得点-->");
	scanf("%d",&b);
	if(a > b)
	{
		printf("aさんの勝ち");
	}
	else if(a == b)
	{
		printf("引き分け");
		
	}
	else
	{
		printf("bさんの勝ち");
	}
	return 0;
}