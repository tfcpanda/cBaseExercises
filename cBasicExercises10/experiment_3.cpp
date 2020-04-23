#include<stdio.h>
int main(void){
/*
		int n,sum=0;
		scanf("%d",&n);
	for (int i = 1;i<n;i++){
		for(int j = 1;j<n;j++){
			for(int k = 1;k<n;k++){
				if(i*5+j*2+k == n){
					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",i,j,k,i+j+k);
					sum += 1 ;	
				}
			}
		}
		
	}
	printf("%d",sum);*/
	
	
			int n,sum=0;
		scanf("%d",&n);
	for (int i = 1;i<n;i++){  //1的硬币数 
		for(int j = 1;j<n;j++){   //2的硬币数 
			for(int k = n;k>=1;k--){   //5的硬币数 
				if(i+j*2+k*5 == n){
					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",k,j,i,i+j+k);
					sum += 1 ;	
				}
			}
		}
		
	}
	printf("count = %d",sum);
	
}