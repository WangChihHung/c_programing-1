#include <stdio.h>
int main(void)
{
	char moji[] = "BCDXEFGHIJKLMNOWPQRSZTUVAY";
	char start;
	char end;
	int n;
	
	printf("moji:%s\n",moji);
	
	printf("�J�n�ʒu-->");
	scanf(" %c",&start);
	
	printf("�I���ʒu-->");
	scanf(" %c",&end);
	
	printf("�\��");
	
	for(n = 0; moji[n] != start ; n++);
	
	while(moji[n] != end)
	{
		printf("%c",moji[n]);
		n++;
		if(moji[n] == '\0')
		{
			n = 0;
		}
		
	}
	printf("%c",moji[n]);
	
	return 0;
}