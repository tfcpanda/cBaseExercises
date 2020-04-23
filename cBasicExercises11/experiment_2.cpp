#include <stdio.h>
//函数声明部分
int max3(int a, int b, int c);
int max(int a, int b);

main()
{
    int x, y, z, maxNum;
    
    scanf("%d %d %d", &x, &y, &z);
    
    maxNum = max3( x,  y,  z);   //调用maxOf3，求出x,y,z中的最大值

    printf("number %d is the biggest one.\n",maxNum);
}


int max3(int a, int b, int c)
{
	int result;

	result = max(a,b);  //函数还可以互相调用，调用max函数，先求出a,b之间的最大值。

	result = max(result,c);   //再次调用max函数，求出result,c中的最大值。
	
	return (result);
}

int max(int a, int b)
{
   	if(a>b){
	   	return a;
	   }else{
   		return b;
   	} 
}