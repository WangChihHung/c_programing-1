#include <stdio.h>
int Max(int dt1,int dt2);

int main(void)
{
	int a;
	int b;
	
	printf("���l1����-->");
	scanf(" %d",&a);
	
	printf("���l2����-->");
	scanf(" %d",&b);
	
	printf("�傫���l%d\n",Max(a,b));

	return 0;
}

int Max(int dt1,int dt2)
{
	int max;
	
	max = dt1;
	if(dt1 < dt2)
	{
		max = dt2;
	}
	
	return max;
}