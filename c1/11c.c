#include <stdio.h>
int Add(int *pa,int *pb);

int main(void)
{
	int a;
	int b;
	
	printf("�ϐ�a����-->");
	scanf("%d",&a);
	
	printf("�ϐ�b����-->");
	scanf("%d",&b);
	
	printf("%d\n",Add(&a,&b));
	
}

int Add(int *pa,int *pb)
{
	int sum;
	sum = *pa + *pb;
	return sum;
}
