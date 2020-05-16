/****************************************************************************
* 文件名: Exercise01_05
* 功能：输入两个整数，求加减乘的结果 
* 作者: TFC 
* 日期: 2020-05-12 
*/
#include<stdio.h>
main()
{
   int a, b, sum, sub, mul;                           
   scanf("%d", &a);                       
   scanf("%d", &b);                       
   sum = a + b;                               
   sub = a - b;
   mul = a * b;
   printf("%d", sum); 
   printf("%d", sub);         
   printf("%d\n", mul); 
   printf("%d\n", sum); 
   printf("%d\n", sub);        
   printf("%d\n", mul); 
}
