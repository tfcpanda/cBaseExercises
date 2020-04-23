#include <stdio.h>
int main()
{
  int num,ten,sing,sum;      
  scanf("%d",&num);

	sing = num%10;
	ten = num/10%10;
	sum = sing*10+ten;
	if(num<=9&&num>=-9){
		 printf("%d",num);
	}
	
 	if(num<-9||num>9&&sing!=0){
	    printf("%d",sum);
	}
	
	if(sing==0){	
		 printf("%02d",sum);
	}
}


