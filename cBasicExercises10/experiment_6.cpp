#include<stdio.h>
/*
	给定一个整数n，输出一个由字符“*”组成的边长为n的中空的正方形。
*/
int main(void){
	int n ;
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		
		for(int j = 1;j<=n;j++){
			if(i==1 ||i == n||j == 1||j == n){
				printf("*");
			}else{
				printf(" ");
			}	
			
			
		}
		
		printf("\n");
	}
}