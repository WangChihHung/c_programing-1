
/* 2~n�̐����̒��ŁA�f���݂̂�\�����Ȃ����B
   �f���Ƃ́A�P�Ƃ��̐����ȊO�ł͊���؂�Ȃ��l�ł���B*/

#include <stdio.h>
int main(void)
{	
	int i,j,n;
	
	printf("����n-->");
	scanf("%d",&n);
	
	for(i = 2;i < n;i++)
	{
		
		for(j = 2;i % j != 0;j++) /*���Z�����j��i������؂��܂Ń��[�v*/
		{
		
		}
		if(j == i)				  /*i������؂ꂽj��i�Ɠ����l�Ȃ�f��*/
		{
			printf(" %d",i);
		}
		
	}
	return 0 ;
}