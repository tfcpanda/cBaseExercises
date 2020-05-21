#include<stdio.h>
void swap(int a,int b); //交換兩個變數
void outputdata(int a[],int n); 
void inputdata(int a[],int n);
int main()
{
	int a[99], n, m, j, k, i, t, min;

	scanf("%d %d", &n, &m);
	
    inputdata( a, n);
	
	for(j = 0; j < m; j++)
	{  
		k = j;
		min = j;
		/*找出最小值的下标*/
    	for(i = j+1; i < n; i++)
    	{
		 	if(a[i]<a[min])
	 		{
 				min = i;
 			} 
		} 
    	
         	t = a[min];
         	a[min] = a[k];
         	a[k] = t;
    		outputdata( a, n);
			printf("\n"); 
	}
	 //outputdata( a, n); 
}

//交換兩個變數
void swap(int a,int b) 
{
    int temp = a;
    a = b;
    b = temp;
    printf("循环里面的的数字  %d %d", a, b);
}

//输出数据 
void outputdata(int a[],int n)
{
	for(int i = 0; i < n ; i++)
	{
		printf("%d ", a[i]); 
		
	}                          
		  
} 

//读取数据 
void inputdata(int a[],int n)
{
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);	
	}
	
}