#include <stdio.h>
int main(void)
{
	int x,y,sum;
	scanf("%d %d",&x,&y);
	if(x<=3){
		sum = 10;
		printf("%d",sum);
	}
	
	else if(x<=10&&x>3){
		sum=10+(x-3)*2;
		if(y>=5){
			sum = sum+(y/5)*2;
				printf("%d",sum);
		}else{
			sum = sum;
			printf("%d",sum);
		}
		
	}
	else{
		sum = 10+14+(x-10)*3;
		if(y>=5){
			sum = sum+(y/5)*2;
			printf("%d",sum);
		}else{
			sum = sum;
			printf("%d",sum);
		}
	}
	
}

	
	
	