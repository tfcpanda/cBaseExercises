#include<stdio.h>
/*
	sum=2+5+8+11+14+��������������n����sum��ǰn��͡�
*/
int main(void){
	int n,sum=0,num=0,i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		num= 2+i*3;
		sum = sum + num;	
	}
	printf("%d",sum);
	
}
