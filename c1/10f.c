#include <stdio.h>
int main(void)
{
	int array[8];
	int n ;
	int i ;
	int memory;
	int *pa;
	pa = array;
	
	
	for(n = 0; n < 8; n++)
	{
		printf("����[%d]--->",n);
		scanf("%d",pa+n);
		
	}
	printf("\n * *�\�[�g�� * *\n");
	
	for(n = 0;n < 8;n++)
	{
		 
		
		for(i = 7; i > n ;i-- )
		{	
			
			if(*(pa+n) > *(pa+i) )    
			{
				memory = *(pa+n);
				*(pa+n) = *(pa+i);
				*(pa+i) = memory;
			}
			
		}
		printf("����[%d]:%d\n",n,*(pa+n));
		
         
	}
	return 0;
}