#include<stdio.h>
/*
输入一个整数n，表示之后有n行数据要输入，每行数据中，可以数任意个整数，
以-1作为结束标志（求和不包括-1），要求计算每行中所有数据的和并输出（一行对应一个输出）
*/
int main(void){
	int n,num,sum= 0;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		sum = 0;
		scanf("%d",&num);
		while(num>-1){
			sum +=num;
			scanf("%d",&num);
		}
		printf("%d\n",sum);
		
	}
	
}