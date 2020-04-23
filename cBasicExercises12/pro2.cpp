#include "stdio.h"
int check(int n,int d);

main()
{
	int num1,num2;
	printf("Enter n,d:");
	scanf("%d,%d",&num1,&num2);
	if(check(num1,num2)==1)
		printf("The digit %d is in data %d\n",num2,num1);
	else 
		printf("The digit %d is not in data %d\n",num2,num1);
}

int check(int n,int d)
{ 
	int keep = n;
	//求出位数
	int j = 1 ;
	for(;n>10;)
	{
		n=n/10;
		j++;
	} 
	
int renmin=keep,key;
	int flage = 0;
	for(int i =0;i<j;i++)
	{
		key = renmin%10;
		if(key==d){
			flage = 1;
			return flage;
		}else{
			flage = 0;
		}
		renmin= renmin/10;
	}
	return flage;
}