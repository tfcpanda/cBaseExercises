#include<stdio.h>
/*
	输入一个任意长度的整数N(N>=0)，求出它是几位数。
*/ 

int main(void){
	int n,sum=0;
	scanf("%d",&n);
	for(;n>0;n= n/10){
		sum++;
	}
	printf("%d",sum);
	
}