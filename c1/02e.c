
/*���͂����啶�����������@���������啶���ɂ�����*/
#include <stdio.h>
int main()
{
	char moji;
	printf("��������-->");
	scanf("%c",&moji);
	if(moji < 'A' || moji > 'z' &&  (moji > 'Z' && moji < 'a')  ) /*����ȕ������ƕϊ��ł��Ȃ��ɂ�����*/
	{
		printf("�ϊ���:�ϊ��ł��Ȃ�");
		return 1;
	}
	else if(moji > 'Z')         /*�������Ȃ�啶���ɂ�����*/
	{
		moji = moji - 32;
	}
	else                        /*�啶���Ȃ珬�����ɂ�����*/
	{
		moji = moji + 32;
	}
	printf("�ϊ���:%c\n",moji);
	return 0;

}