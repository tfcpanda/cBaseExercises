#include<stdio.h>
/*
	一个数如果恰好等于它的因子之和，这个数称为“完数”，
	如6的因子为 1，2，3，而1+2+3=6，因此6就是完数 
	提示： 判断一个数是否是完数，用穷举法：从1～n/2+1 逐个判断是否整除，
	如果整除则累加 如果累加结果与n 相等,则输出完数n； 如果完数个数为0，则输出NO 
	类似问题可以做1111号题目
*/ 
int main(void){
	int n,sum = 0,flag = 0,test = 0;
	scanf("%d",&n);
	for(int j = 2;j<=n;j++){
		for (int i = 1;i<j;i++){	
		if(j%i==0){
			sum +=i;
			}
		}
		if(sum != j){
				flag = 0;
		}else{
			test = 1;
			printf("%d ",sum);	
			
		}
		sum = 0;
	}
	if(flag==0 && test == 0){
		printf("NO");
	}

	
	}