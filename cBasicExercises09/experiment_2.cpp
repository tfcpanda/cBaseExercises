#include<stdio.h>
/*
	����һ�����ⳤ�ȵķǸ���������������λ���֡�
	�磬����237�������λ����Ϊ2��
*/ 
int main(void){
	int n;
	scanf("%d",&n);
	for(;n>0;n= n/10){
		if(n<10){
			printf("%d",n);
		}
	}
	
	
}