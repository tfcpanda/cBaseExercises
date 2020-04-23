#include<stdio.h>
/*
	一个数如果恰好等于它的因子之和，这个数称为“完数”，
	如6的因子为 1，2，3，而1+2+3=6，因此6就是完数
*/
int main(void){
	int n,sum =0;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum = sum+i;
		}	
	}
	if(n==sum){
		printf("YES");
	}else{
			printf("NO");
	} 
	
	
}
