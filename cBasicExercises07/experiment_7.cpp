#include<stdio.h> 
int main(void){
	int n,max=0,num,i;
	scanf("%d",&n);
	
	 i=1;
	
     while(n>=i)
     {
     	
    scanf("%d",&num);
    if(num>max){
   		max = num;
   	} 
   	i++;
   	
   	
     }
     
     
	printf("%d",max);
}
     