#include <stdio.h>

/* ���͂����R�̒l�́A���v�E���ς�\������ */
int main(void) {

    int i,j,k;
    int sum;
	int average;

    printf("���l1:");
    scanf("%d",&i);
    printf("���l2:");
    scanf("%d",&j);
    printf("���l3:");
    scanf("%d",&k);

    sum     = i + j + k;
    average = (i + j + k) / 3;

    printf("�R�̐��l�̍��v: %d\n", sum);
    printf("�R�̐��l�̕���: %d\n", average);
	return 0;


}
