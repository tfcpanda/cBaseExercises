#include<stdio.h>
/*
	����һ������n������s=1+3+5+��+97+n��
	n��һ������(n>1)��
*/
int main(void){
	int n,sum=0;
	scanf("%d",&n);
	for(int i = 1;i<=n;i+=2){
		sum +=i;
	}
	printf("%d",n);
	
}