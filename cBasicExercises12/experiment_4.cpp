#include"stdio.h"
#include"math.h"
/*
���һ������n��k�η��ĺ������书���Ǽ���nk�Ľ��

Ҫ�����øú�������n0��nk�Ľ���������
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
		return n * getpower(n, k - 1);         //�ݹ�ķ��� 
	} 
}