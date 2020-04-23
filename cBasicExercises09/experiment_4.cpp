#include<stdio.h>
/*
	输入正整数n1和n2，试编程输出[n1,n2](含n1和n2）之间不能被3整除的数。
	每行输出5个数字。
*/

int main()
{
	int n1,n2;
 	int i,count=1;
 	scanf("%d%d",&n1,&n2);
 	for(i=n1;i<=n2;i++){
 		
	 	if(i%3!=0 && count%5!=0){  //不能被三除尽的打印输出 
	 	count++;
	 	printf("%d ",i);
 		continue;     //回到循环 
 		
	 }	
	 
	 	if(i%3!=0 && count%5==0){
		 count++;
		 printf("%d\n",i);
		 continue;

	 }
}
 return 0;
}

