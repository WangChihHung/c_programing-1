#include <stdio.h>

/* *���g���ĎO�p�`��\������ */
int main(void)
{
    int i,j;

    for(i=0;i<=10;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
	 printf("\n");
    }
   
    return 0;
}
