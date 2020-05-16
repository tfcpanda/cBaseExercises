#include "stdio.h"
main()
{ 
   int a[1000]={0},i,j,m,n;   //定义一个为0的数组 
   scanf("%d%d",&m,&n);  
   
   int beg = m;   //取起始数 
  for(;beg<=n;beg++)
  {
  	 
  	for(int k = 2;k<beg;k++){    //判断是否为素数 	 
	 
				if(beg%k==0)   //如果除尽就变成-1，不是素数 
			{
          	  a[beg] = -1;  
          	  break;
	  		}
 		    else       //如果都除不尽就是素数 
        	{
        		a[beg] = 1;  
        	}
	
    }
  }
     


   for(i=m;i<=n;i++)
     if(a[i]!=-1)
     printf("%d ",i);
 }