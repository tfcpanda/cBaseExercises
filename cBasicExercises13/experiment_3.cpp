#include <stdio.h>
/*
	本题要求实现一个计算两个数的最大公约数的简单函数。
*/
int gcd( int x, int y );

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);
    printf("%d\n", gcd(x, y));

    return 0;
}

int gcd( int x, int y )   //递归 
{
	if(x%y==0)
  	return y;
 	return gcd(y,x%y);

}