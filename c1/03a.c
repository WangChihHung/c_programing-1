/*�J��Ԃ�����*/

#include <stdio.h>
int main(void)
{
	int i;
	int total = 0;
	for(i = 1;i < 11; i++)
	{
		printf(" %d",i);
	 	
		total = total + i;          
	 
	}
	 printf("\n");         
	 printf("���v:%d\n",total);
	  
	return 0;
}