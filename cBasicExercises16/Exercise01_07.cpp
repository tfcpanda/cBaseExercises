#include"stdio.h"
int insert(int a[],int n,int p, int k);  //num��Ҫ���������,n��ʾ��ǰ��Ч���ݸ���

main()
{  
	int n, p, k, a[20], r;
 	scanf("%d %d %d", &n, &p, &k);

  
	for(int i = 0; i<n; i++)
 	{
  		scanf("%d", &a[i]);
 	}  
  
  	/*���ú���Ϊ1ʱѭ����ӡ�����Ϊ0ʱ�������ʧ��*/ 
	r=insert(a,n,p,k); 
 	if(r == 1) 
  	{
		for(int j = 0; j <= n; j++)
		{
			printf("%d ", a[j]);
		}
	}
	else
	{
		printf("����ʧ��");
    }
}


/**/ 
	int insert(int a[],int n,int p, int k)
	{
		if(p <= n+1 && p>=0)
  		{
			/*���±�P��ʼ�����һ��*/ 
			for(int i = n; i >= p; i--)
      		{
        		a[i] = a[i-1];  
      		} 
      		a[p-1] = k;
      		return 1;  
		}
		else
		{
			return 0;
   }
 }	

 