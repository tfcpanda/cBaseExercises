/************************
* �ļ���: Exercise01_06 
* ���ܣ�����һ������n��n<20����������в�����2n-1��÷ɭ��
* ����: TFC 
* ����: 2020-05-13 
************************/
#include<stdio.h>
#include<math.h>

/******************************************
�������ƣ� isprime(int x) 
�������ܣ��ж��Ƿ�Ϊ���� 
���������
����ֵ��
*****************************************/
int isprime(int x);

int main()
{
	int n, temp;
	scanf("%d", &n);
	temp = pow(2,n)-1;
	for(int i = 1; i < temp; i++)
	{
		if(isprime(i))
		{
			if(isprime(pow(2,i)-1) && isprime(pow(2,i)-1) < temp)
			{
				printf("%d", pow(2,i) - 1); 
			}
		}
	}
} 


int isprime(int x)
{
	int flag = 1;
	/*����и���x���ڵ���û����������Ϊ����*/ 
	for(int i = 2; i <= sqrt(x); i++) 
	{
		/*�ܳ����ľͲ�������*/ 
		if(x%i == 0 && x != 2)
		{
			flag = 0;		
		}
	}
	return flag;
} 