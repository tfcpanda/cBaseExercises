#include<stdio.h>
/*
	����Ĵ����ֵ�����ھ�ֵԪ�ظ���
*/
int main()
{
	int k=100,a[99]={0};
	int i,over_ave=0,s,n=0,sum=0;
	float ave;
	while(1)
	{
		scanf("%d",&a[n]);
		if(a[n]==-1) break;
		s=a[n];
		sum=sum+s;
		n++;
	}
	ave=1.0*sum/n;
	for(i=0;i<n;i++)
	{
		if(a[i]>ave)
		over_ave++;
	}
	printf("%.2f,%d\n",ave,over_ave);
	return 0;
}