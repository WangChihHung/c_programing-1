#include <stdio.h>
int main(void)
{
	int moon;
	printf("������-->");
	scanf("%d",&moon);
	
	switch(moon)
	{
		case 2:
			printf("����:29��\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("����:30��\n");
			break;
		
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			printf("����:31��\n");
			break;
		default:
			printf("���̓��̓G���[\n");
			break;
		
		
	}
	
	return 0;
}