#include <stdio.h>
int main(void)
{
   int kamoku1,kamoku2;
   int total;
   double ave;
   printf("�Ȗ�1�̓_��-->");
   scanf("%d",&kamoku1);
   printf("�Ȗ�2�̓_��-->");
   scanf("%d",&kamoku2);
   total = kamoku1 + kamoku2;
   ave = (double)total / 2;
   printf("2�Ȗڂ̍��v:%d\n",total);
   printf("2�Ȗڂ̕���:%f\n",ave);
   return 0;
}