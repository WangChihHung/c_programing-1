/*繰り返し処理*/

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
	 printf("合計:%d\n",total);
	  
	return 0;
}