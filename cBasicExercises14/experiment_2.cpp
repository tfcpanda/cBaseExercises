#include <stdio.h>
int isleap(int year);  //判断是否闰年
int whatday(int month, int day);  //判断在普通年份下的天数。
int main()
{
    int year,month,day,num;
    scanf("%d %d %d",&year,&month,&day);
    num=whatday(month,day);
    if(month>=3 && isleap(year)==1)//如果过了二月份，而且是闰年
    num++;                         //那就再增加一天
    printf("%d\n",num);
    return 0;
}

int isleap(int year) //判断是否闰年
{
	  
	if((year%4==0&&year%100!=0)||year%400==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int whatday(int month, int day)  //判断在普通年份下的天数。
{
	int sum = 0;
	int daynum[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};  //先将12个月的天数，放在一个数组中
	for(int i = 0;i<month;i++)
	{
		sum = sum + daynum[i];	
	}
	sum = sum + day;
	return sum; 
} 
	
	
	   
