#include <stdio.h>
#include <math.h>
/*
	����Ҫ��ʵ��һ��������
	ͳ�Ƹ��������ڵ���λ��������λ������ͬ����ȫƽ��������144��676���ĸ�����
*/ 
int search( int n );

int main()
{
    int number;
    scanf("%d",&number);
    printf("count=%d\n",search(number));
		
    return 0;
}

int search( int n )
{
	int sum = 0;
	for(int i =1;i<n;i++)
	{
		int x = i; 
		int p[10] = {0};
		int b;
		int m = sqrt(x);
		if(m*m == x)
		{
			while(x)
			{
				b = x%10;
				p[b]++;
				x/= 10; 
			}
			for(int k = 0;k<9;k++)
			{
				if(p[k]>1)
				{
					sum++;
				}
			}
		}
			
	} 
return sum;	


}
