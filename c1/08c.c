#include <stdio.h>
int main(void)
{
	char moji[30];
	int n = 0;
	char prove;
	char change;
	
	printf("文字列入力-->");
	scanf("%30s",moji);
	
	printf("検索文字-->");
	scanf(" %c",&prove);
	
	printf("置換文字-->");
	scanf(" %c",&change);
	
	while(moji[n] != '\0')
	{
		if(moji[n] == prove)
		{
			moji[n] = change;
		}
		n++;	
	}
	printf("結果文字列:%s\n",moji);
	return 0;
}