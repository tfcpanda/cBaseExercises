#include<stdio.h>
main()
{
   int x,y;     /*定义变量*/
   char c;
                  /* 计算处理阶段 */
   scanf("%d %c %d",&x,&c,&y);
   switch (c)
   {
      case '+':
         printf("%d",x+y);break;
      case '-':
         printf("%d",x-y);break;
      case '*':
         printf("%d",x*y);break;
      case '/':
         printf("%d",x/y);
         break;
      case '%':
         printf("%d",x%y);
         break;
      default:
         printf("ERROR");  break;
   }
}
