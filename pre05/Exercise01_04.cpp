/************************
* 文件名: Exercise01_04
* 功能：本题要求计算并输出不超过n的最大的k个素数以及它们的和。 
* 作者: TFC 
* 日期: 2020-05-13 
************************/

#include<stdio.h>
#include<math.h>
/******************************************
函数名称： isprime(int x) 
函数功能：判断是否为素数 
输出参数：
返回值：
*****************************************/
int isprime(int x);

int main()
{
	int n, k, flag, num = 0, sum =0;
	scanf("%d %d",&n, &k);
	
	/*倒序循环所有的数字*/
	for(int j = n; j >= 2; j--)
	{
 	
		/*判断是否为素数*/
			if(isprime(j))
			{
				sum+=j;
				
				/*判断k=1的时候*/
				if(k == 1)
				{
					printf("%d=", j);
					break; 
				} 
				
				/*判断j为2的时候，或者k不为1时的操作*/
				if(j == 2)
				{
					printf("%d=", j);
				} 
				else
				{
					/*直接输出带加号的数字*/
					printf("%d+", j);
				}
				k--;
			}
			
		}	
		printf("%d", sum);	
}



int isprime(int x)
{
	int flag = 1;
	/*如果有根号x以内的数没有因数，则为素数*/ 
	for(int i = 2; i <= sqrt(x); i++) 
	{
		/*能除尽的就不是素数*/ 
		if(x%i == 0 && x != 2)
		{
			flag = 0;		
		}
	}
	return flag;
} 