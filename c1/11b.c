#include <stdio.h>
void SortDisp(int dt1,int dt2);

int main(void)
{
	int num1;
	int num2;
	
	printf("���l����-->");
	scanf("%d",&num1);
	
	printf("���l����-->");
	scanf(" %d",&num2);
	
	SortDisp(num1,num2);

	return 0;
}

void SortDisp(int dt1,int dt2)
{
	int w;
	if(dt1 > dt2)
	{
		w = dt1;
		dt1 = dt2;
		dt2 = w;
		
	}
	printf("���l1:%d\n",dt1);
	printf("���l2:%d\n",dt2);
	
	
}