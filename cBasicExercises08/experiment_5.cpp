#include<stdio.h>


int main(void){
	/*
int n,max=0,num;
	scanf("%d\n",&n);
	int arry[n];
	
	max = arry[0];
	for(int i =0;i<n;i++){
		scanf("%d",&arry[i]);
			if(arry[i]>max){
				max = arry[i];
			}	
	}
	printf("%d",max);*/
	
	
	
	#include<stdio.h>

    int n,a,i,t;
    scanf("%d",&n);
    scanf("%d",&t); //�ȶ���Ϯ��һ����zhidaoҪĬ�ϳ����ģ���Ȼ��t�ĳ�ֵ�ǲ�����
    for(i=1;i<n;i++) //ѭ�����ٶ�n-1����
    {
        scanf("%d",&a);
        if(t<a) t=a;
    }
    printf("%d\n",t);
    return 0;//

	
}
