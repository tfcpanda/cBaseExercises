/************************
* 文件名: Exercise01_01
* 功能：将一笔零钱换成5分、2分和1分的硬币，要求每种硬币至少有一枚，有几种不同的换法？ 
* 作者: TFC 
* 日期: 2020-05-13 
************************/
#include<stdio.h>
int main()
{
	int SumMoney, FiveCent, TowCent, OneCent;
	int FiveLeft, TowLeft, OneLeft, count = 0;
	scanf("%d", &SumMoney);
	/*从大到小循环当5分的价格小于总额的时候进入方法*/
	for(int i = SumMoney; i >= 1;i--)
	{
		FiveLeft = SumMoney - 5*i;
		/*当减去5分之后的钱大于0*/	
		if(FiveLeft > 0)
		{
			/*剩余的在用2分的补*/ 
			for(int j = FiveLeft; j>=1 ; j--)
			{
				TowLeft = FiveLeft - 2*j;
				
				/*最后剩余的钱全用1分的补*/ 
				if(TowLeft > 0)
				{
					OneLeft = TowLeft;					
					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", i, j, OneLeft, i + j + OneLeft); 
					count++;
				
				}
			}
					
		}
		
	}
	printf("count = %d", count);
}