#include<stdio.h>
/*
	һ�������ǡ�õ�����������֮�ͣ��������Ϊ����������
	��6������Ϊ 1��2��3����1+2+3=6�����6��������
*/
int main(void){
	int n,sum =0;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum = sum+i;
		}	
	}
	if(n==sum){
		printf("YES");
	}else{
			printf("NO");
	} 
	
	
}
