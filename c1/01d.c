#include <stdio.h>
int main(void)
{ 
   char c;
   double l;
   int d;
   
   
   printf("���Ȃ��̃C�j�V����-->");
   scanf("%c",&c);
   printf("���Ȃ��̐g��-->");
   scanf("%lf",&l);
   printf("�����̓��t-->");
   scanf("%d",&d);
   printf("�C�j�V����:%c\n",c);
   printf("�g��:%f\n",l);
   printf("�����̓��t:%d��\n",d);
   return 0;
}