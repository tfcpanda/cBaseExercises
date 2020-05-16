/************************
* 文件名: Exercise01_03
* 功能：找出任意两正整数m和n之间的所有完数,所谓完数就是该数恰好等于除自身外的因子之和。 
* 作者: TFC 
* 日期: 2020-05-13 
************************/
#include<stdio.h>
int main()
{
	int a, b, c[999] = {0}, sum, flag = 0;
	scanf("%d %d", &a, &b);
	
	/*循环a~b中所有的数*/
	for(int i = a; a<b; a++)
	{
		sum = 0;
		
		/*找出a的所有的因子*/
		for(int j = 1; j<a; j++)
		{
			
			/*求出所有能除尽的数的和*/ 
			if(a%j==0)
			{
				sum += j;
			}	
			else
			{
				continue;
			}	
		}
		
		/*如果和等于自身则为完数*/ 
		if(a == sum)
		{
			/*有完数就将flag设定为1作为记号*/ 
			flag = 1;
			
			printf("%d = 1", sum);
			
			/*从2开始循环，找出因数*/
			for(int k = 2; k<a; k++)
			{
				/*如果遇见因数就打印输出*/ 
				if(a%k == 0)
				{
					printf(" + %d", k);
				}
			}
			printf("\n");
			
		}
	} 
	
		if(flag == 0)
		{
			printf("None");
		}
	
} 