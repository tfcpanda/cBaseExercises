#include <stdio.h>
/*
	�������¶�ת���������﷨������Ľ�

#include <stdio.h>
int main(void)
{   
   int fahr , lower, upper;   fahr��ʾ���϶� 
   float celsius;         celsius��ʾ���϶� 

   scanf("%d%d",lower,upper);    �����¶�������

  		�¶�ת�� 
   for (fahr = lower , fahr <= upper, fahr ++)
    ;
      celsius = 5 /9 * (fahr - 32.0);
      printf("%d:%.1f\n", fahr, celsius);

   return 0;
}
*/

int main(void)
{   
   int fahr , lower, upper;  /* fahr��ʾ���϶� */
   float celsius;        /* celsius��ʾ���϶� */

   scanf("%d %d",&lower,&upper);   /* �����¶�������*/

  /* �¶�ת�� */
   for (fahr = lower ; fahr <= upper; fahr ++){
   	
     	celsius = 5.0 /9.0 * (fahr - 32.0);
     	
     	printf("%d:%.1f\n", fahr, celsius);
  	 } 
      
  	 return 0;
}

