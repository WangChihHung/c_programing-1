
#include <stdio.h>
#include <string.h>

char *strMid(const char *ss,char *ch,int st,int cnt);		 
int main(void)
{
	char moji[20];
	char after[20];
	int start;
	int len;
	int ret;
	printf("���������-->");
	scanf("%s",moji);
	printf("�w��͈�(�J�n�ʒu,�擾��)-->");
	scanf("%d,%d",&start,&len);
	printf("start��len��\n%d\n%d\n",start,len);
	
	ret = strMid(moji,after,start,len);
	
		if(ret != NULL)
		{
			printf("���o����������%s",ret);
		}
		else
		{
			printf("**�w��͈͊O�G���[**");
		}
	return 0;
}

/*�߂�l:����[���o����������̐擪�A�h���X](����2)*/
/*����1 :���o����镶����̐擪�A�h���X*/
/*����2 :���o������������i�[����擪�A�h���X*/
/*����3 :���o��������̊J�n�ʒu ��C����̔z��(0~)�őΉ�*/
/*����4 :���o��������̕�����*/
char *strMid(const char *ss,char *ch,int st,int cnt)
{
	int sslen;
	int num = 0;
	
	sslen = strlen(ss);
	printf("�����̒���\n%d\n",sslen);
		
		
		if(0 > st || sslen < st ||sslen <= st+cnt || 0 > cnt)
		{
			return NULL;
		}
		
		while(cnt > 0)
		{
			*(ch+num) = *(ss +st+num);
			num++;
			cnt--;
		}
		return ch;
	
	
}