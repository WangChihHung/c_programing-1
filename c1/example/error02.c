#include <stdio.h>

/* i��1����10�܂ŌJ��Ԃ��āA���̍��v��\������v���O���� */
int main(void)
{
    int i;
    int sum = 0;

    for(i=1;i<=10;i++)
	{
      sum = sum + i;
      printf("���݂�sum�� %d �ł�\n", sum);
    }
    return 0;
}
