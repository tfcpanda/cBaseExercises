#include<stdio.h>
/*
	输入一个整数n，计算s=1+3+5+…+97+n。
	n是一个奇数(n>1)。
*/
int main(void){
	int n,sum=0;
	scanf("%d",&n);
	for(int i = 1;i<=n;i+=2){
		sum +=i;
	}
	printf("%d",n);
	
}