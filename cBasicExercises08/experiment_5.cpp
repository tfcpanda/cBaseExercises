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
    scanf("%d",&t); //先读的袭第一个数zhidao要默认成最大的，不然，t的初值是不定的
    for(i=1;i<n;i++) //循环中再读n-1个数
    {
        scanf("%d",&a);
        if(t<a) t=a;
    }
    printf("%d\n",t);
    return 0;//

	
}
