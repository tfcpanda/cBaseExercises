#include "stdio.h"
int main()
{
	int a[10],n,i;
	int k,x,t;	
	printf("������n����������0��ʾ����\n");
	for(n=0;;n++)
	{
		scanf("%d",&a[n]);
		if(a[n]==0)
		      break;
	}
	
	printf("������Ҫ��������֣�");
	scanf("%d",&x);
	for(k=0;k<n;k++)
	{
		//�ҵ���һ��>=insert_num��Ԫ��λ�� 
		if(a[k]>=x)
		      break;
		
	}
	for(i=n-1;i>=k;i--)
	{
		a[i+1]=a[i];
	}	 
	a[k]=x;
	for(i=0;i<=n;i++)
		printf("%5d",a[i]);
}
