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
	printf("������Ҫɾ�������֣�");             
	scanf("%d",&x);                             
	
      for(k=0;k<n;k++)                            
	{                                           
		if(a[k]==x)                                
		      break;                                    
	}                                           
	for(i=k;i<n-1;i++)                          
	{                                           
		a[i]=a[i+1];                               
	}	                                          
	for(i=0;i<n-1;i++)                          
		printf("%5d",a[i]);                        
} 
