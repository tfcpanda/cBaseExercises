#include<stdio.h>
/*
	����һ�����ⳤ�ȵ�����N(N>=0)��������Ǽ�λ����
*/ 

int main(void){
	int n,sum=0;
	scanf("%d",&n);
	for(;n>0;n= n/10){
		sum++;
	}
	printf("%d",sum);
	
}