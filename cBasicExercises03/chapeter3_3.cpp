#include <stdio.h>
int main()
{
   int x,y,temp;                              //声明三个整型变量                              
   
   printf("请输入x,y的值:");                  //提示输入数据
   
  scanf("%d,%d",&x,&y);                   //输入2个整数的值，中间用逗号分隔 

  printf("交换前:x = %d , y = %d\n", x,y );   //输出原来的x和y的值
  
  temp=x;                                   //先把x的值藏一下                                
  x = y;                                    // 把y的值放到x处 
  y = temp;                                   //把x的原值放到y处，那么，x的原值藏在哪里呢？
  
   printf("交换后:x = %d , y = %d\n", x,y );   //输出交换后的x和y的值 
    
}
