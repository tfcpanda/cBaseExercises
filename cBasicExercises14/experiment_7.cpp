#include"stdio.h"
#include"string.h"
/*
	根据身份证号码，获取相关的生日信息，第二代身份证18位号码，
	老版身份证号码15位（假设都是1900-2000年之间的）
	提示：strlen(str)，作用是获取数组中字符的个数（长度），最后一个字符的下标为：长度-1
*/


int getyear(char number[]);
int getmonth(char number[]);
int getday(char number[]);
main()
{
    char str[20];
    int y,m,d;
    gets(str);   //把输入的数字字符存入到字符数组str中
    y=getyear(str);
    m=getmonth(str);
    d=getday(str);
    printf("%d-%d-%d\n",y,m,d);
}
int getyear(char number[])
{
    int l;
    int r;
    l=strlen(number);
 	if(l==15)
        r=(number[6]-'0')*10+(number[7]-'0')+1900;
    else if(l==18)
        r=(number[6]-'0')*1000+(number[7]-'0')*100+(number[8]-'0')*10+(number[9]-'0');
    return r ;
    return r ;
}
 
int getmonth(char number[])
{
    int l;
    int r;
    l=strlen(number);
    if(l==15)
        r=(number[8]-'0')*10+(number[9]-'0');
    else if(l==18)
        r=(number[10]-'0')*10+number[11]-'0';
    return r ;
}
 
int getday(char number[])
{
 int l;
    int r;
    l=strlen(number);
    if(l==15)
        r=(number[10]-'0')*10+(number[11]-'0');
    else if(l==18)
        r=(number[12]-'0')*10+number[13]-'0';
    return r ;
}