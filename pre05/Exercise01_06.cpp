/************************
* 文件名: Exercise01_06 
* 功能：对任一正整数n（n<20），输出所有不超过2n-1的梅森数
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
	int n, temp;
	scanf("%d", &n);
	temp = pow(2,n)-1;
	for(int i = 1; i < temp; i++)
	{
		if(isprime(i))
		{
			if(isprime(pow(2,i)-1) && isprime(pow(2,i)-1) < temp)
			{
				printf("%d", pow(2,i) - 1); 
			}
		}
	}
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