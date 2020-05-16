#include <stdio.h>
int maxDivisor(int a, int b);
main()
{
    int num[6],i, divisor;
    for(i=1;i<=5;i++)
    scanf("%d",&num[i]);    //读取输入的5个整数
     divisor= num[1] ;
    for(i=2;i<=5;i++)
	divisor = maxDivisor(divisor,num[i]);  //依次两两求最大公约数

    printf("The max common divisor is %d", divisor);
}

int maxDivisor(int a, int b)
{
	int temp,i;
	if(a>b)
		temp=b;
	else
		temp=a;
	if(temp<0)
	{
		temp=-temp;
		for(i=temp;i>0;i--)
		{
			if((a%i==0)&&(b%i==0))
			{
				return i;
				break;
			}
		}
	}
	else
	{
		for(i=temp;i>0;i--)
		{
			if((a%i==0)&&(b%i==0))
			{
				return i;
				break;
			}
		}
	}
}