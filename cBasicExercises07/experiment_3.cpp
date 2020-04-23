#include <stdio.h>
main()
{
    int n,i;          //声明变量,其中i为循环变量
    printf("Please enter a number:");
    scanf("%d",&n);   
    i = 1;              //重要的初始化，先让i取要输出的第1个值
    
    //务必仔细斟酌表达式，确保循环能够按照预定设想运行和结束 
    while(i<=10)         //当循环变量比n大11时中止循环
    {                  //循环体
    	
        n = n+1;printf("%d ",n);            //输出1个整数和1个空格
        i++;           //修改循环控制变量的值
    }
    printf("\n");
    return 0;
}

