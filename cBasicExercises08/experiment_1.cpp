#include <stdio.h>
/*
	以下是温度转换程序，有语法错误，请改进

#include <stdio.h>
int main(void)
{   
   int fahr , lower, upper;   fahr表示华氏度 
   float celsius;         celsius表示摄氏度 

   scanf("%d%d",lower,upper);    输入温度上下限

  		温度转换 
   for (fahr = lower , fahr <= upper, fahr ++)
    ;
      celsius = 5 /9 * (fahr - 32.0);
      printf("%d:%.1f\n", fahr, celsius);

   return 0;
}
*/

int main(void)
{   
   int fahr , lower, upper;  /* fahr表示华氏度 */
   float celsius;        /* celsius表示摄氏度 */

   scanf("%d %d",&lower,&upper);   /* 输入温度上下限*/

  /* 温度转换 */
   for (fahr = lower ; fahr <= upper; fahr ++){
   	
     	celsius = 5.0 /9.0 * (fahr - 32.0);
     	
     	printf("%d:%.1f\n", fahr, celsius);
  	 } 
      
  	 return 0;
}

