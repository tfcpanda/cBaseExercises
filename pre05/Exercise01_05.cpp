/************************
* 文件名: Exercise01_05
* 功能：本题要求编写程序，对输入的一个整数，从高位开始逐位分割并输出它的各位数字。
* 作者: TFC 
* 日期: 2020-05-13 
************************/
#include<stdio.h>
int main()
{
	int x, num = 0, a[99] = {0};
	
	scanf("%d", &x);
	
	/*求出这个数有几位数*/
	int temp = x;
	for(;temp>0;)
	{
		temp = temp/10;
		num++;
	}
	
	/*先循环寸进数组中*/
	for(int i = 0; i<num; i++)
	{
		a[i] = x%10;
		x = x/10;
	}
	/*逆循环输出*/
	for(int j = num; j>0; j--)
	{
		printf("%d ", a[j-1]);
	}
	
}