#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char moji[20],num[20];																																																																																																																																																															
	char *mp,*np;
	int i;
	int n = 0;
	mp = moji;
	np = num;
	printf("���������-->");
	scanf("%30s",mp);
	for(i = 0;*(mp+i) != '\0';i++)
	{
		if(isdigit(*(mp+i)))
		{
			
			*(np+n) = *(mp+i);
			n++;
		}
	}
	*(np+n) = '\0';
	
	printf("����������:%s\n",np);
	return 0;
}