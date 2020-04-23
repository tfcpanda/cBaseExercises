#include<stdio.h>
int main(void){
	int n,high=0,middle=0,low=0;
	scanf("%d",&n);
	for(;n>0;){
		if(n>=85){
			high++;
		}
		if(n<84&n>60){
			middle++;
		}
		if(n<60){
			low++;
		} 
		scanf("%d",&n);
	}
	printf(">=85:%d\n",high);
	printf("60-84:%d\n",middle);
	printf("<60:%d\n",low);
}