#include <stdio.h>
#include <math.h>
/*
	本题要求实现一个函数，
	统计给定区间内的三位数中有两位数字相同的完全平方数（如144、676）的个数。
*/ 
int search( int n );

int main()
{
    int number;
    scanf("%d",&number);
    printf("count=%d\n",search(number));
		
    return 0;
}

int search( int n )
{
	int sum = 0;
	for(int i =1;i<n;i++)
	{
		int x = i; 
		int p[10] = {0};
		int b;
		int m = sqrt(x);
		if(m*m == x)
		{
			while(x)
			{
				b = x%10;
				p[b]++;
				x/= 10; 
			}
			for(int k = 0;k<9;k++)
			{
				if(p[k]>1)
				{
					sum++;
				}
			}
		}
			
	} 
return sum;	


}
