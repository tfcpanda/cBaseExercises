#include"stdio.h"
main()
{
   int score;
  
   scanf("%d",&score);
   switch(score/10)
   {
      case 9:
      case 10:
          printf("��");
          break;
      case 8:
          printf("��");
          break;
      case 7:
          printf("�е�");
          break;
      case 6:
          printf("����");
          break;
      default :
          printf("������");
   }
}
