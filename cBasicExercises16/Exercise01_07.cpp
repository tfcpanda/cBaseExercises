#include"stdio.h"
int insert(int a[],int n,int p, int k);  //num是要插入的数据,n表示当前有效数据个数

main()
{  
	int n, p, k, a[20], r;
 	scanf("%d %d %d", &n, &p, &k);

  
	for(int i = 0; i<n; i++)
 	{
  		scanf("%d", &a[i]);
 	}  
  
  	/*调用函数为1时循环打印输出，为0时输出插入失败*/ 
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
		printf("插入失败");
    }
}


/**/ 
	int insert(int a[],int n,int p, int k)
	{
		if(p <= n+1 && p>=0)
  		{
			/*从下表P开始向后退一格*/ 
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

 