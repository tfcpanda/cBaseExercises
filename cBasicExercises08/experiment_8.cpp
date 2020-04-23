#include<stdio.h>
int main(void){
	int n,even=0,singularNum=0;
	scanf("%d",&n);
	
	for(int i = 1;i<=n;i++)
	
		{
		
		if(i%2!=0){
			singularNum = singularNum+i;
		}
		if(i%2==0){
			even = even+i;
		}
	}
	
	printf("%d\n",singularNum);
	printf("%d\n",even);
}

