#include<stdio.h>
/*
	��n����ί��������˶�Ա��֣�10���ƣ����˶�Ա�÷ֽ��Ϊȥ��һ����߷֣�
	ȥ��һ����ͷ֣�Ȼ������ƽ��ֵ��Ϊ�˶�Ա�ĵ÷�
*/
int main()
{
	int n=0; 
	scanf("%d\n",&n);
	float a[n];	
	for(int i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	
	
	//�ҳ����ֵ���±�
	int max = a[0] ,k=0;
	for(int i=0;i<n;i++)
	{
	 if(a[k]<a[i])
		 k=i;
	}
    //��Сֵ���±� 
	int min = a[0];
	int j=0;
	for(int i=0;i<n;i++)
	{
	 if(a[j]>a[i])
		 j=i;
	}
	
	a[k] =0;
	a[j] =0;
	float sum =0,avg =0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	if(n<=2)
	{
		printf("��ί��������");
	} 
	else
	{
		avg = sum/(n-2);
		printf("%.2f\n",avg);
	} 
		
	
	
	
}