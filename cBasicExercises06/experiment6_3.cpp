#include <stdio.h>
int main(void)
{
	int x,y,z;
	scanf("%d %d %d",&x,&y,&z);
	if(x*x+y*y==z*z){
		printf("Y");
	}
	else if(x*x+z*z==y*y){
		printf("Y");
	} 
	else if(y*y+z*z==x*x){
		printf("Y");
	} 
	else{
			printf("N");
	} 
	
}