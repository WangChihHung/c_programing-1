#include <stdio.h>
int main(void)
{
   int kamoku1,kamoku2;
   int total;
   double ave;
   printf("科目1の点数-->");
   scanf("%d",&kamoku1);
   printf("科目2の点数-->");
   scanf("%d",&kamoku2);
   total = kamoku1 + kamoku2;
   ave = (double)total / 2;
   printf("2科目の合計:%d\n",total);
   printf("2科目の平均:%f\n",ave);
   return 0;
}