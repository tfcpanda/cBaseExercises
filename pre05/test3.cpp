#include <stdio.h>
#include <math.h>
int isprime(int x);
int main(int argc,const char *argv[])
{
	int n,k;
	scanf("%d %d",&n,&k);
	int sum=0;
	for(int j=n;j>=2;j--)
	{
		if(isprime(j))//���������
		{
			sum+=j;//�������
	        if(k==1)
			{
			  printf("%d=",j);
	                    break;
			}
			if(j==2)//�жϵ�j=2,ѭ��û���˳���2�����һ����
			{
			   printf("%d=",j);
		    }else
			{
		    	printf("%d+",j);
			}
			k--;
		}	
	}
	printf("%d",sum);
	return 0;
}
int isprime(int x)//�ж��Ƿ�������
{
	int flag=1;
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0&&x!=2)
		{
			flag=0;
			break;
		}
	}
	return flag;
}