#include<stdio.h>
/*
	����һ��������n������s=1+2*2+3*3+��.n*n��
*/
int main(void){
	int n,sum = 0;
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		sum += i*i;
		
	}
	printf("%d",sum);
}