#include <stdio.h>
int main()
{
  int hour,min,leftmin;        //声明变量
  printf("请输入分钟数:");
  scanf("%d",&min);        //输入数据
   	hour = min/60;
    leftmin = min-hour*60;
    printf("%d小时%d分钟",hour,leftmin);

}


