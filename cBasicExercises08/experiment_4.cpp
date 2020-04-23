#include<stdio.h>
/*
	求1-3+5-7+9-...+n的值 ，最后一个n一定为正整数

提示：

方法1：把数列拆成正数和负数两个数列分开就和，再计算结果

方法2: 交错数列看成是普通数列和1 -1 1 -1 1的数列的成绩，
可以用-1n表示，-10，-11 ，-12， -13  对应的结果就是1,-1,1,-1
*/

int main(void){
	int n,sum1=0,sum2=0,sum,num;
	scanf("%d",&n);
	for(int i = 1 ;i<=n;i+=4){   //分开计算  正数部分 
		sum1 = sum1+i;
	}
	for(int i = 3 ;i<=n;i+=4){
		
		sum2=sum2+i*-1;
		
	}
	
		sum = sum1 + sum2;
		printf("%d",sum);
} 
