#include "stdio.h"
main()
{ 
   int a[1000]={0},i,j,m,n;   //����һ��Ϊ0������ 
   scanf("%d%d",&m,&n);  
   
   int beg = m;   //ȡ��ʼ�� 
  for(;beg<=n;beg++)
  {
  	 
  	for(int k = 2;k<beg;k++){    //�ж��Ƿ�Ϊ���� 	 
	 
				if(beg%k==0)   //��������ͱ��-1���������� 
			{
          	  a[beg] = -1;  
          	  break;
	  		}
 		    else       //������������������� 
        	{
        		a[beg] = 1;  
        	}
	
    }
  }
     


   for(i=m;i<=n;i++)
     if(a[i]!=-1)
     printf("%d ",i);
 }