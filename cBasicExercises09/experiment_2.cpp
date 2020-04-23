#include<stdio.h>
/*
	输入一个任意长度的非负整数，求出其最高位数字。
	如，输入237，则最高位数字为2。
*/ 
int main(void){
	int n;
	scanf("%d",&n);
	for(;n>0;n= n/10){
		if(n<10){
			printf("%d",n);
		}
	}
	
	
}