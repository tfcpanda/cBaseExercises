#include"stdio.h"
main()
{
   int score;
  
   scanf("%d",&score);
   switch(score/10)
   {
      case 9:
      case 10:
          printf("优");
          break;
      case 8:
          printf("良");
          break;
      case 7:
          printf("中等");
          break;
      case 6:
          printf("及格");
          break;
      default :
          printf("不及格");
   }
}
