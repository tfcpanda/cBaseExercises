#include<stdio.h> 
int main(void){
	int n;
	float k,sum=0,i;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)	 
		{
			k = 1/i;	
		sum = sum+k;
	} 
	printf("%.3f",sum);
}