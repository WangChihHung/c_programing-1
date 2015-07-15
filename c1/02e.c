
/*入力した大文字→小文字　小文字→大文字にしたい*/
#include <stdio.h>
int main()
{
	char moji;
	printf("文字入力-->");
	scanf("%c",&moji);
	if(moji < 'A' || moji > 'z' &&  (moji > 'Z' && moji < 'a')  ) /*特殊な文字だと変換できないにしたい*/
	{
		printf("変換後:変換できない");
		return 1;
	}
	else if(moji > 'Z')         /*小文字なら大文字にしたい*/
	{
		moji = moji - 32;
	}
	else                        /*大文字なら小文字にしたい*/
	{
		moji = moji + 32;
	}
	printf("変換後:%c\n",moji);
	return 0;

}