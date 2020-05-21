#include<stdio.h>
void inputdata(int a[],int n);
void outputdata(int a[],int n);
void swap(int a,int b);
int  main()
{
	int n,m,a[99],i,j;
	n = 8;
  	inputdata( a, n);
	   
 for ( i = 0; i < n-1; i++) 
		{
  			for ( j = 0; j < n - 1 - i; j++)
			{
            
            	if (a[j] > a[j + 1])
 					{
					 	
			 			int temp = a[j+1];
						a[j+1] = a[j];
						a[j ] = temp;
  
               	    }
                
            }
            
        }
         outputdata( a, n);

}


void outputdata(int a[],int n)
{
	for(int i = 0; i < n ; i++)
	{
		printf("%d ", a[i]); 	
	}                          
		  
} 


void inputdata(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	
}


void swap(int a,int b) 
{
    int temp = a;
    a = b;
    b = temp;
}