#include<stdio.h>
/*
����һ������n����ʾ֮����n������Ҫ���룬ÿ�������У������������������
��-1��Ϊ������־����Ͳ�����-1����Ҫ�����ÿ�����������ݵĺͲ������һ�ж�Ӧһ�������
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