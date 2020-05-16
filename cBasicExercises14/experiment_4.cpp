#include"stdio.h"
main()
{
    int a[100],i;
    int n;
    scanf("%d",&n);
    for(int i = 1;i<n+1;i++)
    {
    	if(i%2!=0)
    	{
	    	a[i] = 2*i-1;
	    }
    	else
		{
	    	a[i] = -1*(2*i-1);
	    }		
    }
    
    for(i=1;i<=n;i++)
      printf("%d ",a[i]);
}