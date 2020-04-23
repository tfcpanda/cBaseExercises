#include<stdio.h>
/*
	输入一个整数n，计算
	s = 1*2+2*3+3*4+.....+n*(n+1);
*/
int main(void){
	int n,sum = 0;
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		sum += i*(i+1);
		
	}
	printf("%d",sum);
}