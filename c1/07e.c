#include <stdio.h>
int main(void)
{
	int i = 1;
	int indat;
	int cnt[6] = {0,0,0,0,0,0};
	printf("��������-->");
	scanf("%d",&indat);
	while(indat != -1)
	{
		cnt[indat-1] = cnt[indat-1] + 1;
		printf("��������-->");
		scanf("%d",&indat);
	}
	while(i <= 6)
	{
		printf("%d:%d��\n",i,cnt[i-1]);
		i++;
	}
	return 0;
}