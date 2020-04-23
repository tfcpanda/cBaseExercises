#include <stdio.h>
int main()
{
  int num,hund,ten,sing,sum;      
  scanf("%d",&num);
	sing = num%10;
	ten = num/10%10;
	hund = num/10/10%10;
	
	sum = sing*sing*sing + ten*ten*ten + hund*hund*hund;
	
	if(sum==num){
			printf("Y");
		
	} else{
			printf("N");
	}	
}


