#include <stdio.h>
int main(void)
{
	char file_path[200];
	char file_name[10];
	char s[20];
	FILE *fpr;
	printf("�t�@�C��������-->");
	scanf("%s",file_name);
	sprintf(file_path,"Z:\\c1\\%s",file_name);
	fpr = fopen(file_path,"r");
	if(fpr != NULL)
	{
		printf("�t�@�C���͒ʏ�ɊJ���܂���\n");
		while(fgets(s,5,fpr) != NULL)
		{
			printf("%s",s);
		}
		printf("\n");
	
	
	}
	else
	{
		printf("�t�@�C���͊J���ĂȂ���\n");
	}
	fclose(fpr);
	return 0;
}