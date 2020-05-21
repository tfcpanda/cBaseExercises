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
  
  
  
  if(p <= n+1 && p>=0)
  {
    /*从下表P开始向后退一格*/ 
    for(int i = n; i >= p; i--)
    {
      a[i] = a[i-1];  
    } 
    a[p-1] = k;
    
  }
  else{
   printf("NO"); 
 }

 for(int j = 0; j <= n; j++)
 {
   printf("%d ", a[j]);
 }
 
}


