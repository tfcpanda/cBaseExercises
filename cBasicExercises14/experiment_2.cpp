#include <stdio.h>
int isleap(int year);  //�ж��Ƿ�����
int whatday(int month, int day);  //�ж�����ͨ����µ�������
int main()
{
    int year,month,day,num;
    scanf("%d %d %d",&year,&month,&day);
    num=whatday(month,day);
    if(month>=3 && isleap(year)==1)//������˶��·ݣ�����������
    num++;                         //�Ǿ�������һ��
    printf("%d\n",num);
    return 0;
}

int isleap(int year) //�ж��Ƿ�����
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

int whatday(int month, int day)  //�ж�����ͨ����µ�������
{
	int sum = 0;
	int daynum[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};  //�Ƚ�12���µ�����������һ��������
	for(int i = 0;i<month;i++)
	{
		sum = sum + daynum[i];	
	}
	sum = sum + day;
	return sum; 
} 
	
	
	   
