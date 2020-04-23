#include <stdio.h>
int main()
{
	int n,i,x,sum;
	while ( 1 ) 
	{
		scanf("%d",&n);
		 {
		 	if ( n==(-1) )
		  	break;
		 }
		sum=0;
		for ( i=0;i<n;i++ ) 
		{ 
			scanf("%d",&x);
		 	sum+=x; 
	 	}
		printf("%d\n",sum);
	}
    return 0;
}