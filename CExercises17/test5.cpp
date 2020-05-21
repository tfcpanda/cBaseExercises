#include<stdio.h>
main() 
{
	int a[20],m,n,i,minpos,t,k;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
 	{
	 	scanf("%d",&a[i]); 
	 }
	 
	 
     for(i=0;i<m;i++)
     {  
     	minpos=i;
     	for(int j=i+1;j<n;j++)
     	{
	     	if(a[j]<a[minpos])
	     	{
	     		minpos=j;
	     	}
     	}
	     	t = a[i];
			a[i] = a[minpos];
			a[minpos] = t;
   	 for(k=0;k<n;k++)
 	{
	 	printf("%d ",a[k]); 
	 }
	printf("\n"); 				
  }
}