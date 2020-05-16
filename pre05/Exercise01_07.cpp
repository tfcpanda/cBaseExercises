/************************
* 文件名: Exercise01_07
* 功能：本题要求对任意给定的正整数n，求方程x2+y2=n的所有正整数解
* 作者: TFC 
* 日期: 2020-05-13 
************************/
#include<stdio.h>
#include<math.h>
int main()
{
	int n, SoluX, SoluY, Left, flag = 0;
	scanf("%d", &n);
	
	/*循环全部的数*/
	for(int i = 1; i<n; i++)
	{
		SoluX = i*i;
		Left = n - SoluX;
		/*拆分数字，分成两半*/
		for(int j = 1; j < Left; j++)
		{
			if((j*j == Left) && (i<=j) )
			{	
					printf("%d %d\n", i, j);
					flag = 1;
			}
		}
		
	}
	
	if(flag == 0)
	{
		printf("No Solution");
	}
}