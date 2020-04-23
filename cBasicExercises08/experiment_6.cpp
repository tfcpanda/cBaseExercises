#include<stdio.h>
int main(void){
	int a,b,c,num2=0,sum1 = 0,sum2 = 0;
	

	scanf("%d",&a);
	for(int i = 1;i<=a;i++){
		sum1 += i;
	}
	


	scanf("%d",&b);
	for(int i = 1;i<=b;i++){
		num2 = i*i;
		sum2 += num2;
	}
	
	
	scanf("%d",&c);
		float sum3 = 0;
		float num3;
	for(int i = 1;i<=c;i++){
		num3 = 1.0/i;
 		sum3 = sum3+num3; 
	}
	
	float sum;
	sum = sum1+sum2+sum3;
	printf("%.2f",sum);

	
}