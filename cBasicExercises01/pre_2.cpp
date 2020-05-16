/****************************************************************************
* 文件名: pre_2 
* 功能：输入两个整数a和b（其中，a>=b>=0)，求a除b的商和余数
* 作者: TFC 
* 日期: 2020-05-12 
*/
#include<stdio.h>
main()
{
   int a, b, quo, rem;                       
   scanf("%d", &a);                       
   scanf("%d", &b);                                                    
   quo = a / b;
   rem = a - (b*quo);
   printf("%d\n", quo);       
   printf("%d\n", rem);    
}