#include<stdio.h>
int main(void){
 	int test,num,n,sum=0; 	
 	scanf("%d",&test);
 
	 for(;test>-1;){
	 	n = test;
	 	sum = 0;
 		for(int i = 0;i<n;i++){
 			scanf("%d",&num);
		 		sum +=num;
		 }
		 printf("%d\n",sum); 
	scanf("%d",&test);
	 }
}