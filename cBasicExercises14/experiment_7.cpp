#include"stdio.h"
#include"string.h"
/*
	�������֤���룬��ȡ��ص�������Ϣ���ڶ������֤18λ���룬
	�ϰ����֤����15λ�����趼��1900-2000��֮��ģ�
	��ʾ��strlen(str)�������ǻ�ȡ�������ַ��ĸ��������ȣ������һ���ַ����±�Ϊ������-1
*/


int getyear(char number[]);
int getmonth(char number[]);
int getday(char number[]);
main()
{
    char str[20];
    int y,m,d;
    gets(str);   //������������ַ����뵽�ַ�����str��
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