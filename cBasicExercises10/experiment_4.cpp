#include<stdio.h>
/*
	求指定范围内[m,n] 的所有素数
*/
int main(void){
	int n,m,test = 0;
	scanf("%d %d",&n,&m);
	for(;n<=m;n++){
		test = 0;
		for(int i = 2;i<n;i++){
			if(n%i==0){
				test++;
				}
			}
		if(test == 0){
			printf("%d\n",n);
		}	
			
	}	
}