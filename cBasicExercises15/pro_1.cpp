#include"stdio.h"
/*
	����һ�����ݣ�n������������20���������ݽ����������
*/
main()
{
	int a[20],i,j,k,t;
	int n;
	scanf("%d",&n);
	if(n==0)
	{
		printf("û������");
	}
	else
	{
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	}
	
	for(j=0;j<n;j++)
	{  
    	   k=j;
    	   for(i=j+1;i<n;i++)
        	if(a[k]>a[i])
             	   k=i;
    	   if(k!=j) 
    	   {
         		t = a[j];
         		a[j]=a[k];
         		a[k]=t;
    	   }
	}
	for(int i = 0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}