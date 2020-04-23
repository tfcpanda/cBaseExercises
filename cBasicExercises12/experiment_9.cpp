#include "stdio.h"
int fact(int n);   //阶乘函数
int cmn(int m,int n);  //组合函数
int pmn(int m,int n);   //排列函数

main()
{
	int m,n,comb,perm;
	scanf("%d %d",&m,&n);
	
	comb=cmn(m,n);
	perm=pmn(m,n);
	
	printf("comb(%d,%d)=%d\n",m,n,comb);
	printf("perm(%d,%d)=%d\n",m,n,perm);
}
int fact(int n)
{
	int x=1,i;
	for(i=1;i<=n;i++)
	x=x*i;
	return x;
}
int cmn(int m,int n)
{
	int x;
	x=fact(m)/(fact(n)*fact(m-n));
	return x;
}
int pmn(int m,int n)
{
	int x;
	x=fact(m)/fact(m-n);
	return x;
}