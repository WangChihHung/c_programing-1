#include <stdio.h>
int main(void)
{
	int a,b;
	printf("a����̓��_-->");
	scanf("%d",&a);
	printf("b����̓��_-->");
	scanf("%d",&b);
	if(a > b)
	{
		printf("a����̏���");
	}
	else if(a == b)
	{
		printf("��������");
		
	}
	else
	{
		printf("b����̏���");
	}
	return 0;
}