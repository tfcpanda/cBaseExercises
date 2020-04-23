#include<stdio.h>
/*
	输入一个整数n，输出边长为n的由"*"构成的等腰直角三角形星阵。
*/
int main(void){
	int n;
	scanf("%d",&n);
	for(int i =1;i<=n;i++){
		for (int j = 1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
}