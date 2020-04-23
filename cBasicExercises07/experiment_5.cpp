#include<stdio.h>
main(void){
	int n,max = 0;
	scanf("%d",&n);
	while(n>-1){
		
		if(n>max){
			max = n;
		}
		scanf("%d",&n);
	}
	printf("%d",max);
	
}

