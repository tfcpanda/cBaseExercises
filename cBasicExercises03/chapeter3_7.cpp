#include <stdio.h>
int main( )
{
   double x,per,area;
   scanf("%lf",&x);
 	per = 2*3.14*x;
	area = 3.14*x*x;  
   printf("%5.2f %5.2f",per,area);
   return 0;
   
}
