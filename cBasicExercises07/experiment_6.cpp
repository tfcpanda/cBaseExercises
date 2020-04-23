#include<stdio.h>
int main(void){
	int n,num,sum = 0;
	scanf("%d",&n);
	while(n>0){
		num = n%10;
		sum = sum +num;
		n = n/10;
	}
	printf("%d",sum);
}