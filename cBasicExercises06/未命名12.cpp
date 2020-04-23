#include <stdio.h>
int main()
{
 int x,sum=0,n=0;
 scanf("%d",&x);
 while(x>-1)
   {
      sum+=x;
      n++;
      scanf("%d",&x);
   }
   float fsum;
   float fn;
   fsum = sum;
   fn = n;
   printf("%.2f",fsum/fn);
 return 0;  
}
