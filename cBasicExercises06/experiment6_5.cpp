#include<stdio.h>
main()
{
   int x,y;     /*�������*/
   char c;
                  /* ���㴦��׶� */
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
