#include <stdio.h>
int main(void)
{
	int n;
	int array[5] = {0,0,0,0,0};
	int ret;
	printf("��������-->");
	ret = scanf("%d",&n);
	while(ret != EOF &&(n > 0 && n <= 50))
	{
		array[n / 10] = array[n / 10] + 1;
		printf("��������-->");
		ret = scanf("%d",&n);
	}
	printf("* * * ���� * * *\n");
	for(n = 0; n < 5;n++)
	{
		printf("�z��[%d]:%d��\n",n,*(array + n));
	}
	return 0;
}