/************************
* �ļ���: Exercise01_01
* ���ܣ���һ����Ǯ����5�֡�2�ֺ�1�ֵ�Ӳ�ң�Ҫ��ÿ��Ӳ��������һö���м��ֲ�ͬ�Ļ����� 
* ����: TFC 
* ����: 2020-05-13 
************************/
#include<stdio.h>
int main()
{
	int SumMoney, FiveCent, TowCent, OneCent;
	int FiveLeft, TowLeft, OneLeft, count = 0;
	scanf("%d", &SumMoney);
	/*�Ӵ�Сѭ����5�ֵļ۸�С���ܶ��ʱ����뷽��*/
	for(int i = SumMoney; i >= 1;i--)
	{
		FiveLeft = SumMoney - 5*i;
		/*����ȥ5��֮���Ǯ����0*/	
		if(FiveLeft > 0)
		{
			/*ʣ�������2�ֵĲ�*/ 
			for(int j = FiveLeft; j>=1 ; j--)
			{
				TowLeft = FiveLeft - 2*j;
				
				/*���ʣ���Ǯȫ��1�ֵĲ�*/ 
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