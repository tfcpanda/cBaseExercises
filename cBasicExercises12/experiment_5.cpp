#include"stdio.h"

int fb(int n);  //쳲�������ͺ���ԭ������

int main()
{
    int n,s;
    scanf("%d",&n);
    s=fb(n);
    printf("%d\n",s);
}

int fb(int n)
{
	
	int total=0;
	
	
	//ֻ����һ�� 
	int first = 1;    //���ں�һλ�� 
	int second = 0;  //���ڵ�һλ�� 
	int third = 0;    //
	while(n>0)
	{
		n = n - 1;
		second = first;	
		first = third;	
		third = first + second;
		total = total + third;//����ǰn���
	}
	return total;
}


 
