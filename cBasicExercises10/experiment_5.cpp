#include<stdio.h>
/*
	����һ������n������߳�Ϊn����"*"���ɵĵ���ֱ������������
*/
int main(void){
	int n;
	scanf("%d",&n);
	for(int i =1;i<=n;i++){
		for (int j = 1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	
}