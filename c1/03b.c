#include <stdio.h>
int main()
{
   int i,j;
   printf("整数1(小)入力-->");
   scanf("%d",&i);
   printf("整数2(大)入力-->");
   scanf("%d",&j);

   
   		printf("結果:");
   		for(j;i <= j;i++)
		{
			printf("%d ",i);
		}
   
	return 0;
}