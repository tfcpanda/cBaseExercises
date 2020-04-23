#include <stdio.h>
int main( )
{
   int x,y;
   printf("Enter x:\n");
   scanf("%d", &x);
   if( x%10 == 0){
       y = 3* x;
   }
   else {
       y = x;
   }
   printf("f(%d)=%d\n",x,y);
   return 0;
}

