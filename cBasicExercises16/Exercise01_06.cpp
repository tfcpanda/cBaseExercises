#include"stdio.h"
void inputdata(int a[],int n);  //输入数据
int deldata(int a[],int n,int p);  //p表示要删除的数据或下标，n表示数据个数
void outputdata(int a[],int n);    //输出数组内容
main()
{   int b[20]; 
    int m,k,r;
    scanf("%d%d",&m,&k); 
    inputdata(b,m);
    
	 deldata(b,m,k);
    
    outputdata(b,m); 
    return 0;
}

/*录入数字*/
void inputdata(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}

/*p表示要删除数据，n表示数组中数据个数，a[n]是数组*/
int deldata(int a[],int n,int p)
{	int k;
	 for( k = 0; k<n;k++)                            
	{                                           
		if(a[k]==p)                                
		      break;                                    
	}   
	
		for(int j = k; j < n-1; j++)                          
		{                                           
			a[j]=a[j+1];                               
		}
	                   
}

/*输出数组内容*/
void outputdata(int a[],int n)
{
	for(int i = 0; i < n ; i++)                          
		printf("%d ", a[i]);   
} 