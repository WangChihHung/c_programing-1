#include <stdio.h>
int main(void)
{
	
	int flag;
	int cost;
	int money = 0;
	printf("���x,���z==>");

	while(scanf("%d,%d",&flag,&cost) != EOF)
	{   
		if(cost <= 0)
		{
			printf("������x���͂��Ă�\n");
		}
	
		else if(flag == 0)
		{
			money = money + cost;
		}
		else if(flag == 1)
		{
			money = money - cost;
		}
		else
		{
			printf("������x���������͂��Ă�\n");
		}
		printf("���x,���z==>");
	}
	printf("�c��:%d�~",money);
return 0;
}