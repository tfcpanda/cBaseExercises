#include <stdio.h>
int main(void)
{
	int x,y;
	scanf("%d %d",&x,&y);
	if(x>0&&y>0){
		printf("I");
	}
	else if(x<0&&y>0){
		printf("II");
	} 
	else if(x<0&&y<0){
		printf("III");
	} 
	else if(x>0&&y<0){
			printf("IV");
	} 
	else if(y==0&&x!=0){
			printf("X");
	} 
	else if(x==0&&y!=0){
			printf("Y");
	}else if(x==0&&y==0){
			printf("OK");
	}
	
}