#include"stdio.h"

int fb(int n);  //斐波那契求和函数原型申明

int main()
{
    int n,s;
    scanf("%d",&n);
    s=fb(n);
    printf("%d\n",s);
}

int fb(int n)
{
	
	int total=0;
	
	
	//只用了一次 
	int first = 1;    //等于后一位数 
	int second = 0;  //等于第一位数 
	int third = 0;    //
	while(n>0)
	{
		n = n - 1;
		second = first;	
		first = third;	
		third = first + second;
		total = total + third;//计算前n项和
	}
	return total;
}


 
