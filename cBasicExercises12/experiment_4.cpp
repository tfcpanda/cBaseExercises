#include"stdio.h"
#include"math.h"
/*
设计一个计算n的k次方的函数，其功能是计算nk的结果

要求利用该函数，求n0～nk的结果，并输出
*/
int getpower(int n,int k);
main()
{
    int n,k,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<=k;i++)
        printf("%d\n",getpower(n,i)  )  ;
}

int getpower(int n,int k)
{
	if (k == 1) {
		return n;
	}

	else if (k == 0) {
		return 1;
	}

	else {
		return n * getpower(n, k - 1);         //递归的方法 
	} 
}