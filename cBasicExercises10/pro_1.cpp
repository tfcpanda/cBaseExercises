#include"stdio.h"
int sum(int n);   //函数原型申明
main()
{
   int n,s;
   scanf("%d",&n);
   s=sum(n);   //函数调用
    printf("%d\n",s);
}
     //函数定义（设计

int sum(int n) 
{
   /* 局部变量声明 */
   int sum= 0;
 
	for(int i = 1;i<=n;i++){
		sum+=i;
	}
 
   return sum; 
}