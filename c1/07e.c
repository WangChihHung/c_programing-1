#include <stdio.h>
int main(void)
{
	int i = 1;
	int indat;
	int cnt[6] = {0,0,0,0,0,0};
	printf("整数入力-->");
	scanf("%d",&indat);
	while(indat != -1)
	{
		cnt[indat-1] = cnt[indat-1] + 1;
		printf("整数入力-->");
		scanf("%d",&indat);
	}
	while(i <= 6)
	{
		printf("%d:%d回\n",i,cnt[i-1]);
		i++;
	}
	return 0;
}