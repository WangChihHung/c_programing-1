#include <stdio.h>

/* 2�̐��l����͂��A���̍��v��\������ */
int main(void)
{
    int num1;
    int num2;
    int sum;

    printf("���l1:");
    scanf("%d",&num1);
    printf("���l2:");
    scanf("%d",&num2);

    sum = num1 + num2;

    printf("���͂����l�̍��v�� %d �ł�\n", sum);

    return 0;
}
